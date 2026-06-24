#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    if (n == 1) return; 
    ll m = sqrt(n);
    for (int i = 2;i <= m; ++i)
    {
        if (n % i == 0)
        cout << i << " ";
        while (n%i ==0)
        {
            n/=i;
        }
    }
    if (n > 1) cout << n;
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("PRIMEDIV.INP", "r", stdin);
    freopen("PRIMEDIV.OUT", "w", stdout);
    ll n; cin >> n;
    solve(n);
    
    return 0;
}