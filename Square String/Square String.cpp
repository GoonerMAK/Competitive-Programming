#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string str;
        cin >> str;

        int len = str.size();
        int Count=0;

        if(len % 2 == 0)
        {
                for(int i=0, j=len/2 ; i<(len/2) ; i++,j++ )        /// Imagining the string has been separated into 2 equal parts
                {
                    if(str[i] == str[j])                          ///   if both strings have the same characters in the same index then we can say that the initial string is a square string
                        {
                            Count++;
                        }
                }

            if(Count == len/2)
            {
                cout << "YES" << endl;
            }

            else
            {
                cout << "NO" << endl;
            }
        }

        else                           /// if the string length isn't even then it can't be a square string
        {
            cout << "NO" << endl;
        }

    }

    return 0;
}
