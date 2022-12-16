#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int prefix[n] = {0};             ///    array for prefix sums
    string str;
    cin >> str;

    for(int i=1 ; i<=n ; i++)
    {                                                                 ///  A letter is adding (str[i] - 'a' + 1) to the sum
        prefix[i] = prefix[i-1] + ( str[i-1] - 'a' ) + 1;            ///   calculating the prefix sums
    }                                                               ///    note that: prefix[0] is always 0

    while(q--)
    {
        int l, r;
        cin >> l >> r;

        cout << prefix[r] - prefix[l-1] << endl;
    }

    return 0;
}

///  character arithmetic operations

///  prefix sums

///  singling out a sum of substring from a string
