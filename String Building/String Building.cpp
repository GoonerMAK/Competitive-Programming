#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int flag = 1, counter = 1;                 /// counter = number of consecutive letters
        string str;
        cin >> str;

        for(int i=0 ; i < str.size() ; i++)       /// or str[i] != '\0'
        {
            if(str[i] != str[i+1])
            {
                if(counter == 1)          ///  if at any point, the counter is 1 (while neighbouring letters are not the same).... that means that there's a lone 'a' or 'b' in that string...
                {
                    flag = 0;            ///   ...in that case, it's not possible to build that string with aa, aaa, bb or bbb (since 'a' and 'b' are alone)
                    break;
                }
                counter = 1;
            }

            else
            {
                counter++;
            }
        }

        if(flag == 1)
        {
            cout << "YES" << endl;
        }

        else if( flag == 0)                     /// if flag is 0 then it's not possible to build a string with aa, aaa, bb or bbb (counter once became 1... there's a lone 'a' or 'b' or both)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}



///  Differentiating Consecutive letters in a string

///  Finding a lone letter in a string
