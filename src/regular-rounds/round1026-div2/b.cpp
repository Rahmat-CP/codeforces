#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 5;

string s;
int counter;

void Main() {
    cin >> s;
	int st = 0;

	counter = 0;
	for(int i = 0; s[i]; i++) {
		if(st == 0) counter++;
		if(s[i] == '(') st++;
		else st--;
	}
	if(counter > 1) cout << "YES\n";
	else cout << "NO\n";
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
	problem name: Down with Brackets
	problem letter: B
	Time: 2025-05-24 18:05 UTC: +3:30

	Writer: EnAnsari
	Email: Rahmat2022a@gmail.com
	website: enansari.github.io

	The starting point of all achievement is desire. ~Napolean Hill

	this code created by rcph (https://github.com/EnAnsari/cph)
*/