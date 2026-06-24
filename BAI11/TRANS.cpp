#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n, ll a,ll b)
{
    // ll cach1 = (n+49)/50 * a;
    // ll cach2 = (n+3)/4 *b;
    // ll xe50 =  n / 50;
    // ll du = n % 50;
    // ll cach3 = (xe50 * a) + ((du+3)/4*b);
    // ll ans = min({cach1,cach2,cach3});
    // if (ans == cach3)
    // {
    //     cout << xe50 << " " << (du+3)/4;
    //     return;
    // }
    // if (ans == cach1)
    // {
    //     cout << (n+49)/50 << " " << 0;
    //     return;
    // }
    // if (ans == cach2)
    // {
    //     cout << 0 << " " << (n+3)/4;
    //     return;
    // }
    ll maxxebus = (n+49)/50; 
    ll maxtien = ((n+49)/50)*a;
    ll output1 = ((n+49)/50), output2 = 0;
    for (int i = 0; i <= maxxebus; ++i)
    {
        ll conlai = n - (i*50);
        ll j = 0;
        if (conlai > 0)
        {
            j = (conlai+3)/4;
        }
        ll tien = i*a + j*b;
        if (tien < maxtien)
        {
            maxtien = tien;
            output1 = i;
            output2 = j;
        }
    }
    cout << output1 << " " << output2; 
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TRANS.INP", "r", stdin);
    freopen("TRANS.OUT", "w", stdout);
    ll n,a,b;
    cin >> n >> a >>b;
    solve(n,a,b);
    return 0;
}