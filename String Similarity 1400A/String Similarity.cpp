#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string str;

        cin >> n >> str;

        for(int i=0 ; i<str.size() ; i=i+2)      ///  only taking 0 2 4 6 8 .... index(s) (i = i + 2)
        {                                       ///   str.size()
            cout << str[i];
        }

        cout << endl;
    }

    return 0;
}

///  patterns

///   000
///   001
///   010
///   011
///   100
///   101
///   110
///   111

/// just take the even index(s)

