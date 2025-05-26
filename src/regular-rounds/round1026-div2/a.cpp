#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 100 + 5;
const int oo = 1e9 + 7;

int n, a[N];
int first_even, last_even, first_odd, last_odd;

void Main() {
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	first_odd = first_even = last_even = last_odd = -1;
	for(int i = 0; i < n; i++)
		if(a[i] % 2 == 0) {
			first_even = i;
			break;
		}
	for(int i = 0; i < n; i++)
		if(a[i] % 2 == 1) {
			first_odd = i;
			break;
		}
	for(int i = n - 1; i >= 0; i--)
		if(a[i] % 2 == 0) {
			last_even = i;
			break;
		}
	for(int i = n - 1; i >= 0; i--)
		if(a[i] % 2 == 1) {
			last_odd = i;
			break;
		}

	int ans = oo;
	if(first_even != -1) ans = min(ans, first_even + ((n - 1) - last_even));
	if(first_odd != -1) ans = min(ans, first_odd + ((n - 1) - last_odd));

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
	contest name: round1026-div2
	contest link: https://codeforces.com/contest/2110
	contest detail: Codeforces Round 1026 (Div. 2)
	problem name: Fashionable Array
	problem letter: A
	Time: 2025-05-24 18:05 UTC: +3:30

	Writer: EnAnsari
	Email: Rahmat2022a@gmail.com
	website: enansari.github.io

	Successful people do what unsuccessful people are not willing to do. Don't wish it were easier, wish you were better. 
	~Jim Rohn

	this code created by rcph (https://github.com/EnAnsari/cph)
*/