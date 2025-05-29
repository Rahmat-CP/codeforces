#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 2e5 + 5;

int n, ans;
int a[N];

void Main() {
    cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	int pre = 1;
	for(int i = 1; i < n; i++) {
		if(a[i - pre] + 1 >= a[i]) {
			a[i] = -5;
			pre++;
		}
		else pre = 1;
	}

	ans = 0;
	for(int i = 0; i < n; i++)
		ans += (a[i] > 0);

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
	problem name: Need More Arrays
	problem letter: C
	Time: 2025-05-26 18:05 UTC: +3:30

	Writer: EnAnsari
	Email: Rahmat2022a@gmail.com
	website: enansari.github.io

	It's not what you look at that matters, it's what you see. ~Anonymous

	this code created by rcph (https://github.com/EnAnsari/cph)
*/