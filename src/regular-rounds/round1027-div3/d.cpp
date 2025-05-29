#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 2e5 + 5;
const ll oo = 2e18;

int n;
pair<int, int> m[N];
int r[N], c[N];
ll ans;

ll area(ll x_mn, ll x_mx, ll y_mn, ll y_mx) {
	return (x_mx - x_mn + 1) * (y_mx - y_mn + 1);
}

void Main() {
    cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> m[i].first >> m[i].second;
		r[i] = m[i].first;
		c[i] = m[i].second;
	}

	sort(r, r + n);
	sort(c, c + n);

	if(n <= 2) {
		cout << n << '\n';
		return;
	}
	if(r[0] == r[n - 1]) { // all in one row
		ll area_one = area(1, 1, c[0], c[n - 2]);
		if(area_one == n - 1) area_one = n;
		ll area_two = area(1, 1, c[1], c[n - 1]);
		if(area_two == n - 1) area_two = n;
		cout << min(area_one, area_two) << '\n';
		return;
	}
	if(c[0] == c[n - 1]) { // all in one column
		ll area_one = area(r[0], r[n - 2], 1, 1);
		if(area_one == n - 1) area_one = n;
		ll area_two = area(r[1], r[n - 1], 1, 1);
		if(area_two == n - 1) area_two = n;
		cout << min(area_one, area_two) << '\n';
		return;
	}

	ans = area(r[0], r[n - 1], c[0], c[n - 1]);
	if(ans == n) {
		cout << n << '\n';
		return;
	}
	int x_mx, x_mn, y_mx, y_mn;
	for(int i = 0; i < n; i++) {
		pair<int, int> removed = m[i];
		if(removed.first == r[0]) x_mn = r[1];
		else x_mn = r[0];
		if(removed.first == r[n - 1]) x_mx = r[n - 2];
		else x_mx = r[n - 1];
		if(removed.second == c[0]) y_mn = c[1];
		else y_mn = c[0];
		if(removed.second == c[n - 1]) y_mx = c[n - 2];
		else y_mx = c[n - 1];
		ll new_area = area(x_mn, x_mx, y_mn, y_mx);
		if(new_area == n - 1) // new rectangle is full
			new_area += min(x_mx - x_mn + 1LL, y_mx - y_mn + 1LL);
		ans = min(ans, new_area);
	}
	cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--) Main();
    // Main();
    return 0;
}
/*
	contest name: round1027-div3
	contest link: https://codeforces.com/contest/2114
	contest detail: Codeforces Round  1027 (Div. 3)
	problem name: Come a Little Closer
	problem letter: D
	Time: 2025-05-26 18:05 UTC: +3:30

	Writer: EnAnsari
	Email: Rahmat2022a@gmail.com
	website: enansari.github.io

	If you can't explain it simply, you don't understand it well enough. ~Albert Einstein

	this code created by rcph (https://github.com/EnAnsari/cph)
*/