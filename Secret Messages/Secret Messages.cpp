#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string word;
        cin >> word;

        for(int i=(word.size()-1) ; i>=0 ; i--)                 ///   .size()
        {
            if(word[i] >= 'a' && word[i] <= 'z')               ///  if it's a small letter
            {
                if( word[i] > 'm' )                           ///  if it's bigger than 'm' then rotating 13 will surpass 'z'... going back to 'a'
                {
                    word[i] = 'a' + (word[i] - 'm') - 1;        ///  (word[i] - 'm') is calculating how far ahead the letter is in terms of 'm'...  then we are adding the difference with 'a'...
                    printf("%c", toupper(word[i]) );           ///    we subtracted 1 because we are adding with 'a' not 'z'
                }

                else
                {
                    printf("%c", toupper(word[i]+13) );        ///  if it's smaller or equal than 'm' then we are simply adding 13
                }
            }

            else                                          /// if it's a capital letter
            {
                if(word[i] > 'M')
                {
                    word[i] = 'A' + word[i] - 'M' - 1;          ///   repeating the process
                    printf("%c", tolower(word[i]) );
                }

                else
                {
                    printf("%c", tolower(word[i] + 13) );
                }

            }

        }

        puts("");

    }

    return 0;
}

///  Alphabetical order cycle

///  ASCII values

///  character arithmetic operations
