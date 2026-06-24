#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(ll n, ll k, ll p1, ll p2)
{
    ll cach1 = n * p1;
    ll cach2 = (n / k * p2) + (n % k *p1);
    ll cach3 = (n + k - 1)/k * p2;
    return min({cach1,cach2,cach3});
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("TICKETS.INP", "r",stdin);
    freopen("TICKETS.OUT", "w", stdout);
    ll n,p1,p2,k;
    cin >> n >> k >> p1 >> p2;
    cout << solve(n,k,p1,p2);
    return 0;
}