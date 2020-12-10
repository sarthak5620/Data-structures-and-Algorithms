#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while ( t-- )
    {
        long long int a, b, n;
        cin >> a >> b;
            
        n = a*b;
        n%2 == 0 ? cout << n/2 << endl : cout << n/2 + 1 << endl;
    }

    return 0;
}