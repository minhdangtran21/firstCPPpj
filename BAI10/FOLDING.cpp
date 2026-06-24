#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gapcanh1(ll bandau, ll muctieu)
{
    ll cnt = 0;
    if (bandau < muctieu)
    return -1;
    else if (bandau > muctieu)
    {
        if (muctieu > bandau/2)
        return 1;
        else
        {
            ll langap = bandau;
            while (langap > muctieu && langap >= 1)
            {
                ++cnt;
                langap = (langap+1)/2;
            }
            return cnt;
        }
    }
    else
    return 0;
}
ll WriteAns(ll w, ll h, ll w1, ll h1)
{
    ll gap1 = gapcanh1(w,w1);
    if (gap1 == -1) gap1 = 1e18;
    ll gap2 = gapcanh1(h,h1);
    if (gap2 == -1) gap2 = 1e18;
    ll gap3 = gapcanh1(w,h1);
    if (gap3 == -1) gap3 = 1e18;
    ll gap4 = gapcanh1(h,w1);
    if (gap4 == -1) gap4 = 1e18;

    ll ans;

    ll cach1 = gap1 + gap2;
    ll cach2 = gap3 + gap4;
    if (cach1 >= 1e18) cach1 = -1;
    if (cach2 >= 1e18) cach2 = -1;
    if (cach1 == -1 && cach2 == -1) return -1;
    if (cach1 >= 0 && cach2 >= 0)
    {
        ans = min(cach1, cach2);
        return ans;
    }
    if (cach1 >= 0)
    return cach1;
    else
    return cach2;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("FOLDING.INP", "r", stdin);
    freopen("FOLDING.OUT", "w", stdout);
    ll w, h,w1,h1;
    cin >> w >> h >> w1 >> h1;
    cout << WriteAns(w,h,w1,h1);
    
    return 0;
}