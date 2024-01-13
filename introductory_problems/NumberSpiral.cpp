#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, ans;
        cin >> n >> m;
        if (n >= m)
        {
            if (n % 2 == 0)
                ans = n * n - m + 1;
            else
                ans = (n - 1) * (n - 1) + m;
        }
        else
        {
            if (m % 2 == 1)
                ans = m * m - n + 1;
            else
                ans = (m - 1) * (m - 1) + n;
        }
        cout << ans << endl;
    }
    return 0;
}