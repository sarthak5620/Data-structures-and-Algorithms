#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, i, a[n];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = n-1; i >= 0; i--)
    {
        cout << a[i] << endl;
    }
    return 0;
}
