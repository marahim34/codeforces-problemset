#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Only 2 is an exceptional case; you cannot split it into two positive even parts.
    if (n != 2 && n % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}