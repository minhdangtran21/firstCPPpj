#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void tinhdoan(ll x, ll dx, ll d, ll dd, ll t, ll dt, ll v,ll dv )
{
    ll x1 = 0, t1 =0;
    ll canhngang = 0;
    for (ll i = x; i >= 1; --i)
    {
        ll dodai = i *dx;
        if (dodai % dt == 0)
        {
            ll j = dodai / dt;
            if (j <= t)
            {
                canhngang = dodai;
                x1 = i;
                t1 = j;
                break;
            }

        }
    }
    ll d1 = 0, v1 =0;
    ll canhdoc =0;
    for (ll i = d; i >= 1; --i)
    {
        ll dodai = i * dd;
        if (dodai % dv == 0)
        {
            ll j = dodai / dv;
            if (j <= v)
            {
                canhdoc = dodai;
                d1 = i;
                v1 = j;
                break;
            }
        }
    }
    if (canhngang == 0 || canhdoc == 0)
    {
        cout << 0 << "\n" << 0 << " " << 0 << " " << 0 << " " << 0;
    }
    else
    {
         unsigned long long dientich = (unsigned long long)canhngang * canhdoc;
    cout << dientich << "\n" << x1 << " " << d1 << " " << t1 << " " << v1;
    }
    }
   

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("BRVY.INP", "r", stdin);
    freopen("BRVY.OUT", "w", stdout);
    ll x,dx, d,dd, t,dt,v,dv;
    cin >>x>>dx>>d>>dd>>t>>dt>>v>>dv;
    tinhdoan(x,dx,d,dd,t,dt,v,dv);

    return 0;
}