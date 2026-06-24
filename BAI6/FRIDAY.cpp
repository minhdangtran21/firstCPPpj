#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve (ll n, ll k)
{
    // k = 5 va ngay 13
    // moi thang la 30 ngay => 30 % 7 = 4 * 7 + 2 sau moi thang ngay 13 + 2 thu len
    // 1-1 2-2 3-3 4-4 5-5 6-6 7-7 1-8 2-9 3-10 4-11 5-12 6-13 => ngya 13 dau cua thang 1 = (k + 12) % 7
    ll ngay13thang1 =(k+12) % 7;
    ll cnt = n / 7;
    ll thangconlai = n % 7;
    ll thu = ngay13thang1;
    for (int i = 1; i <= thangconlai; ++i)
    {
        if (thu == 5)
        ++cnt;
        thu = (thu + 2)%7;
        if (thu == 0) thu = 7;
       
    }
    return cnt;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("FRIDAY.INP", "r", stdin);
    freopen("FRIDAY.OUT", "w", stdout);
    ll n, k; cin >> n >> k;    
    cout << solve(n,k);
    return 0;
}