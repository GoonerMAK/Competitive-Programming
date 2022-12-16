#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    if(n%4 == 1 || n%4 == 2)
    {
        cout << 1 << endl;
    }

    else
    {
        cout << 0 << endl;
    }

    return 0;
}

///  patterns

///  1 --> 1
///  2 --> 1
///  3 --> 0
///  4 --> 0
///  5 --> 1
///  6 --> 1
///  7 --> 0
///  8 --> 0

///  Alternative: if the sum of 1 to n numbers is even then Ans:0... else Ans:1

///  Alternative: Ans: ( (n+1)/2 )%2
