#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve (ll m, ll n, ll k) // 5
{
    ll maxdoi = min(m/2,n);
    ll conlai = (m+n)-(maxdoi*3);
    if (conlai < k)
    {
        ll can = k - conlai;
        ll doi = (can+2)/3;
        ll chiadoi = maxdoi - doi;
        return chiadoi;
    }
    else
    return maxdoi;
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("LARES.INP", "r", stdin);
    freopen("LARES.OUT", "w", stdout);
    ll m,n,k; cin >> m >> n >> k;
    cout << solve(m,n,k);
    return 0;
}