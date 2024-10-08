#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int count = 0;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int sum = a + b + c;

        // If atleast 2 of them decide to implement the problem
        if (sum >= 2)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}