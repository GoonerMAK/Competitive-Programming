#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;

        cout << -(n-1) << " " << n << endl;
    }

    return 0;
}

///  25 --> -24 25
///  13 --> -12 13
///  1  -->   0 1
///  3  -->  -2 3
