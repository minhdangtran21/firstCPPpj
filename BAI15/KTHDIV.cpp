#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve (ll n, ll k)
{
    vector <ll> v;
    for (ll i = 1; i * i<= n; ++i)
    {
        if (n % i == 0)
        {
           v.push_back(i);  
            if (i*i != n)
            {
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(), v.end());
    if (k > (ll)v.size())
    {
        return -1;
    }
    else
    return v[k-1];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("KTHDIV.INP", "r", stdin);
    freopen("KTHDIV.OUT", "w", stdout);
    ll n,k; cin >> n >> k;
    cout << solve(n,k);
    return 0;
}