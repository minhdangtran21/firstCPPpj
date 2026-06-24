#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n)
{
    int count = 0;
    int m = sqrt(n);
    for (ll i = 1; i <= m; ++i)
    {
        if (n % i==0)
        count += 2;
        if (i*i == n)
        --count;
    }
    if (count % 2 ==0) cout << "OFF";
    else cout << "ON";
    
}
int main()
{
    ios::sync_with_stdio(true);
    cin.tie(nullptr);
    freopen("BULBS.INP","r", stdin);
    freopen("BULBS.OUT","w", stdout);
    int n; cin >> n;
    solve(n);
    return 0;
}