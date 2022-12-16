#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        int B=0;

        for(int i=0 ; i<s.size() ; i++)          ///  .size()
        {
            if(s[i] == 'B')
            {
                B++;
            }
        }

        ( s.size() == 2*B ? puts("YES") : puts("NO") );       /// because one operation removes A and B... and the other one removes B and C
                                                             ///  B is getting removed every time an operation is performed (that's why the size has to be 2 times the number of B(s) (2*B) )
    }

    return 0;
}

///   Alternative : count of A + count of C  has to equal to  count of B

///   Alternative : count( s.begin(), s.end(), 'B' ) ... this gives us the count of 'B'

///   Math
