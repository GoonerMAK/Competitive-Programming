#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long right, left, jumps;

        cin >> right >> left >> jumps;

        if(jumps%2 == 1)            /// if the number of jumps are odd (if k is odd)... the number of right jumps will always be 1 more than the number of left jumps...
        {
            cout << ( (jumps/2)+1 )*right - (jumps/2)*left << endl;       ///  because the first jump is always to the right...
        }

        else
        {
            cout << (jumps/2)*right - (jumps/2)*left << endl;          /// if the number of jumps are even... right jumps = left jumps
        }

    }

    return 0;
}

///  math
