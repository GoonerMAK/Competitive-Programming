#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long row, col, x;
        cin >> row >> col >> x;

        x = x - 1;                                        /// part of the algorithm

        long long new_row = x % row;                      /// part of the algorithm
        long long new_col = x / row;                      /// part of the algorithm

        cout << (new_row * col) + new_col + 1 << endl;    /// The algorithm
    }

    return 0;
}


/// Finding out the cell number of a number 'x' in "by rows" format from "by column" format
