#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 100 + 5;

string s;

int a2[N];
void preprocess() {
	for(int i = 0; i <= 100; i++)
		a2[i] = i * i;
}

void Main() {
    cin >> s;
	int n = (s[0] - '0') * 1000 + (s[1] - '0') * 100 + (s[2] - '0') * 10 + (s[3] - '0');
	int idx = lower_bound(a2, a2 + 101, n) - a2;
	if(n == a2[idx])
		cout << 0 << ' ' << idx << '\n';
	else
		cout << -1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	preprocess();
	int t; cin >> t; while(t--) Main();
    // Main();
    return 0;
}
/*
	contest name: round1027-div3
	contest link: https://codeforces.com/contest/2114
	contest detail: Codeforces Round  1027 (Div. 3)
	problem name: Square Year
	problem letter: A
	Time: 2025-05-26 18:05 UTC: +3:30

	Writer: EnAnsari
	Email: Rahmat2022a@gmail.com
	website: enansari.github.io

	People who succeed have momentum. The more they succeed, the more they want to succeed, and the more they find 
	a way to succeed. Similarly, when someone is failing, the tendency is to get on a downward spiral that can 
	even become a self-fulfilling prophecy. ~Tony Robbins

	this code created by rcph (https://github.com/EnAnsari/cph)
*/