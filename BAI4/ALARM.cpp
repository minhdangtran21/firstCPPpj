#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    const int a[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int gio = 0, phut =0;
    for (int i = 0; i < 24; ++i)
    {
        for (int j = 0; j <= 59; ++j)
        {
            gio = a[i/10] + a[i%10];
            phut = a[j/10] + a[j%10];
            int vach = gio + phut;
            if (vach == n)
            {
                if (i < 10)
                cout << 0 << i;
                else
                cout << i;
                cout << ":";
                if (j < 10)
                cout << 0 << j;
                else cout << j;
                return;
            }
        }
    }
    cout << "Impossible";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("ALARM.INP", "r",stdin);
    freopen("ALARM.OUT", "w", stdout);
    int n;
    cin >> n;
    solve(n);
    return 0;
}