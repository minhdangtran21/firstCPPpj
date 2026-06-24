#include <bits/stdc++.h>
using namespace std;

void solve (int m, int n)
{
    int den = 0, maudo = 0, xanhla = 0, xanhduong = 0;
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            int val = i*j;
            if (val % 5 ==0)
            {
                ++xanhduong;
            }
            else if(val % 3 == 0)
            {
                ++xanhla;
            }
            else if (val % 2 == 0)
            {
                ++maudo;
            }
            else
            ++den; 
        }
    }
    cout << maudo << "\n" << xanhla << "\n" << xanhduong << "\n" << den;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("COLORING.INP", "r", stdin);
    freopen("COLORING.OUT", "w", stdout);
    int m, n; cin >> m >> n;
    solve(m,n);
    return 0;
}