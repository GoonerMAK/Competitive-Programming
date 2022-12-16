#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s, rev;
        cin >> s;

        rev = s;

        reverse( rev.begin(), rev.end() );   /// reversing the string

        if(s == rev || k==0)                /// if the string s is a palindrome then s will be equal to rev... on the other hand when k is zero we won't perform any operations, so the original string remains
        {
            cout << "1" << endl;           ///  if s and rev are the same then we won't get any different strings... therefore the answer is 1
        }

        else                               ///  the answer will be 2 for every other cases because after performing the 1st operation the string becomes a palindrome... so we will get 2 different strings
        {
            cout << "2" << endl;
        }
    }

    return 0;
}

///  palindrome

///  strings

///  reverse()
