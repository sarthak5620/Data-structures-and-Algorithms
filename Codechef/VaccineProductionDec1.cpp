#include <bits/stdc++.h>
using namespace std;

int main ()
{
  
    int d1, v1, d2, v2, p, d = 0;
    cin >> d1 >> v1 >> d2 >> v2 >> p;

    while (p>0)
    {
        d++;
        if (d >= d1)
            p -= v1;
        if (d >= d2)
            p -= v2;
    }
    cout << d;

    return 0;
}