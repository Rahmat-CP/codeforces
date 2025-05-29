#include <bits/stdc++.h>

using namespace std;

#define ll long long
const int N = 2e5 + 5;

int n;
long long a[N];
vector<int> adj[N];
ll ans[N];

void dfs(int curr, int par, ll m_par, ll a_par) {
    ans[curr] = a[curr] + m_par;
    ll m_for_children = max(0LL, -a[curr] + a_par);
    
    ll current_node_threat_for_children = ans[curr];

    for (int neighbor_node : adj[curr]) {
        if (neighbor_node == par) continue;
        dfs(neighbor_node, curr, m_for_children, current_node_threat_for_children);
    }
}

void Main() {
    cin >> n;

    for (int i = 1; i <= n; i++)
        adj[i].clear();

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    dfs(1, 0, 0LL, 0LL);

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << '\n';
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
	problem name: Kirei Attacks the Estate
	problem letter: E
	Time: 2025-05-26 18:05 UTC: +3:30

	Writer: EnAnsari
	Email: Rahmat2022a@gmail.com
	website: enansari.github.io

	I find that when you have a real interest in life and a curious life, that sleep is not the 
	most important thing. ~Martha Stewart

	this code created by rcph (https://github.com/EnAnsari/cph)
*/