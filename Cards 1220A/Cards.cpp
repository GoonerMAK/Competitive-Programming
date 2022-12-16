#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, word;
    cin >> s >> word;

    for(int i=0 ; i<word.size() ; i++)
    {
        if(word[i] == 'n')                          ///  "zero" and "one"... 'n' is the distinct character
        {
            cout << "1 ";
        }
    }

    for(int i=0 ; i<word.size() ; i++)
    {
        if(word[i] == 'z')                       ///  'z' and 'r' are the distinct characters
        {
            cout << "0 ";
        }
    }

    return 0;
}

///  strings
