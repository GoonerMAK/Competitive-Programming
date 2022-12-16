#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int square, cube, common, n;
        cin >> n;

        square = sqrt(n);
        cube   = cbrt(n);
        common = cbrt( sqrt(n) );          /// we need to subtract the common elements (like '1')

        cout << square + cube - common << endl;
    }

    return 0;
}

