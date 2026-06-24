#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(ll n)
{
    ll o=1;
    ll lopke = 0;
    for (ll i = 2; i<= n; ++i)
    {
        lopke += 6;
        o+= lopke;
    }
    return o;
}
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("BEEHIVE.INP", "r", stdin);
    freopen("BEEHIVE.OUT", "w", stdout);
    ll n; cin >> n;
    cout << solve(n);
    return 0;
}