#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k=1;
        cin >> n;

        while( k*2 <= n )
        {
            k = k*2;
        }

        cout << k-1 << endl;
    }

    return 0;
}

/// patterns

/// bitmasks (bitwise AND)

/// ...64 32 16 8 4 2 1


///         Input         Ans
///           1       -->  0
///         2,3       -->  1
///       7,6,5,4     -->  3
///   15,14,13...9,8  -->  7
///   31,30....17,16  -->  15
///   63,62....33,32  -->  31 and so on...


