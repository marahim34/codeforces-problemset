#include <iostream>
#include <cmath> // For ceil function
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        long long x, y, k; // x, y coordinates and max jump distance
        cin >> x >> y >> k;

        // Calculate the number of jumps required in each direction
        long long jumps_to_x = (x + k - 1) / k; // Same as ceil(x / k)
        long long jumps_to_y = (y + k - 1) / k; // Same as ceil(y / k)

        // Calculate total moves
        long long total_moves = max(jumps_to_x, jumps_to_y) * 2;
        if (jumps_to_x == jumps_to_y)
        {
            total_moves--; // If both jumps are the same, last jump doesn't alternate
        }

        cout << total_moves << endl; // Output the result for the test case
    }

    return 0;
}
