#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(ll w, ll m, ll k)
{
    vector <ll> v;
    ll tongphi = 0, count = 0;
    while (tongphi < w) 
    {
        ll t = m, d =0;
        while(t > 0)
        {
            t/= 10; 
            ++d; // d la S(n);
        }
        tongphi += k* d;
        ++m;
        if(tongphi <= w)
        ++count;
    }
    return count;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("CONSEG.INP", "r", stdin);
    freopen("CONSEG.OUT", "w", stdout);
    ll w,m,k; cin >>w>>m>>k;
    cout <<solve(w,m,k);
    return 0;
}