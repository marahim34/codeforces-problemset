#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int stringLength = s.length();

        if (stringLength > 10)
        {
            char firstWord = s[0];
            char lastWord = s[stringLength - 1];
            int newLength = stringLength - 2; // Subtracting initial and last index

            cout << firstWord << newLength << lastWord << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}