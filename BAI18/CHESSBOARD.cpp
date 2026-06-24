#include <bits/stdc++.h>
using namespace std;
int solve(int n, int m)
{
    int banco = n * m;
    int mauden = (banco + 1)/2;
    return mauden;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("CHESSBOARD.INP", "r", stdin);
    freopen("CHESSBOARD.OUT", "w", stdout);
    int n,m; cin >> n >> m;
    cout << solve(n,m);
    return 0;
}