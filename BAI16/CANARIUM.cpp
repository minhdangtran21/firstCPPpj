#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve (ll k)
{
    ll m1 = sqrt(k);
    ll ans1 = -1, ans2 = -1;
    for (ll i = m1; i >=1; --i)
    {
        ll tu = 2*k-i-1;
        ll mau = 2*i+1;
        ll n1 = tu/mau;
        if (tu%mau == 0 && i <= n1)
        {
            
            ans1 = n1;
            ans2 = i;
            cout << ans2 << " " << ans1;
            return;
                
            
        }
    }
   cout << ans1 << " " << ans2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("CANARIUM.INP", "r", stdin);
    freopen("CANARIUM.OUT", "w", stdout);
    ll k;
    while (cin >> k)
    {
        solve(k);
        cout << "\n";
    }
    return 0;
}