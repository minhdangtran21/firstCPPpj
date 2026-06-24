#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>v;
void solve(ll n)
{
    if (n == 0) {
        cout << 10;
        return;
    }
    else if (n == 1)
    {
        cout << 1;
        return;
    }
    for (ll i = 9; i >=2; --i)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n/=i;
        }
    }
   if (n > 1)
   {
    cout << -1;
    return;
   }
    
   else
   {
    for (int i = v.size() - 1; i >= 0; --i)
    {
        cout << v[i];
    }
    return;
   }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("PRODIG.INP", "r", stdin);
    freopen("PRODIG.OUT", "w", stdout);
    ll n;
    cin >> n;
    solve(n);
    
    return 0;
}