#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, n;
        cin >> n >> d;

        int i, a[n], count = 0, d1, d2, counter = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[n];
            if (a[i] <= 9 || a[i] >= 80)
                count++;
        }

        counter = n - count;

        d1 = count / d;
        if (count % d != 0)
            d1++;

        d2 = counter / d;
        if (counter % d != 0)
            d2++;

        cout << d1 + d2 << endl;
    }
    return 0;
}