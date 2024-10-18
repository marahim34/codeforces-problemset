#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int result = 0;
        // if (a != 2)
        // {
        //     b = 0;
        //     continue;
        // }

        if (a == 1)
        {
            result = result + b;
        }

        cout << result << endl;
    }
    return 0;
}