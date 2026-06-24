#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(ll w, ll d, ll m)
{
    ll m1 = m -1;
    ll ngaytruocdo = (m1 / 2 * 30)  + ((m1 - m1/2) * 31);
    ll ngaychenhlech = ngaytruocdo + d + w - 1;
    ll thu = ngaychenhlech % 7;
    if (thu == 0)
    thu = 7;
    return thu;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("CALENDAR.INP", "r", stdin);
    freopen("CALENDAR.OUT", "w", stdout);
    ll w, d, m; cin >> w >> d >> m;
    cout << solve(w,d,m);
    return 0;
}