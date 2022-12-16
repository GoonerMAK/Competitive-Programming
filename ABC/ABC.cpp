#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if(n <= 2)
        {
             if( (s[0] == '0' && s[1] == '1') || (s[0] == '1' && s[1] == '0') || n == 1 )     ///  only if the string is 0, 1, 10, 01 then the output will be "YES"
             {
                 cout << "YES" << endl;
             }

             else
             {
                 cout << "NO" << endl;
             }
        }

        else      /// whenever the size is over 2... it will impossible to find a substring that is not a palindrome (101, 010, 11, 00 are all palindromes)
        {
            cout << "NO" << endl;
        }

    }

    return 0;
}


///  critical thinking
