#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int one=0, zero=0;
        string s;
        cin >> s;

        for(int i=0 ; i < s.size() ; i++ )
        {
            if( s[i] == '1' )
            {
                one++;
            }

            else
            {
                zero++;
            }
        }

        if(zero < one)
        {
            cout << zero << endl;
        }

        else if(one < zero)
        {
            cout << one << endl;
        }

        else                          /// when zero == one
        {
            cout << one-1 << endl;     ///  zero-1 also works  (this is because you can always find one substring where you can perform the operation) (patterns)
        }

    }

    return 0;
}


///   patterns

///   10101010... we can take the first seven or the last seven characters... answer will be 3
///   likewise for 10100011 or 101000111100
