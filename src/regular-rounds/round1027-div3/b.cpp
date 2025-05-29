#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 5;

int n, k, n0, n1;
string s;

void Main() {
	cin >> n >> k >> s;
	n0 = n1 = 0;
	for(int i = 0; i < n; i++)
		if(s[i] == '0') n0++;
		else n1++;
	// calculate for we don't want good
	n1 -= (n - 2 * k) / 2;
	n0 -= (n - 2 * k) / 2;

	if(n0 < 0 || n1 < 0 || n1 % 2 || n0 % 2)
		cout << "NO\n";
	else
		cout << "YES\n";
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
	problem name: Not Quite a Palindromic String
	problem letter: B
	Time: 2025-05-26 18:05 UTC: +3:30

	Writer: EnAnsari
	Email: Rahmat2022a@gmail.com
	website: enansari.github.io

	The ones who are crazy enough to think they can change the world, are the ones that do. ~Anonymous

	this code created by rcph (https://github.com/EnAnsari/cph)
*/