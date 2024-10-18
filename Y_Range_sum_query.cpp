#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;

    long long a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long preSum[n];
    preSum[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        preSum[i] = a[i] + preSum[i - 1];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << preSum[i] << " ";
    // }

    while (q--)
    {
        long long l, r;
        cin >> l >> r;

        l--;
        r--;

        long long sum = 0;

        if (l == 0)
        {
            sum = preSum[r];
        }
        else
        {
            sum = preSum[r] - preSum[l - 1];
        }

        cout << sum << endl;
    }
    return 0;
}