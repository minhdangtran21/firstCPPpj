#include <bits/stdc++.h>
using namespace std;
int solve(int a, int b, int c)
{
    int maxhoa = c/a;
    int tien = 0, imax = 0;
    for (int i = 0; i <= maxhoa;++i)
    {
        for (int j = maxhoa; j >= 0; --j)
        {
            if (i + j <= maxhoa && i * a + j *b <= c)
            {
                tien = i*a + j*b;
                if (tien > imax)
                imax = tien;
            }
        }
    }
    return imax;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("FLOWERS.INP", "r", stdin);
    freopen("FLOWERS.OUT", "w", stdout);
    int a, b,c;
    cin >> a >> b >> c;
    cout << solve(a,b,c);

}