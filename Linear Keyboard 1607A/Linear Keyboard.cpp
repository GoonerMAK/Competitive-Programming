#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string order, word;
        int sum=0;

        cin >> order >> word;

        for(int i=0 ; i<(word.size() - 1) ; i++)      /// if the word is "hello" then the condition will be i<(5-1)... so, 0,1,2,3
        {
            int counter1=0, counter2=0;

            for(int j=0 ; j<26 ; j++)           ///   trying to find an element's position in an order...
            {
                if(word[i+1] != order[j])             /// (i+1) is written because No time is spent on pressing the keys and on placing your hand over the first letter of the word
                {
                    counter1++;
                }

                else                                 ///  if the characters of word[i+1] and order[j] are the same
                {
                    for(int k=0 ; k<26 ; k++)
                    {
                        if(word[i] != order[k])      ///  we're taking word[i]... because we need to calculate how much time it took to come to i+1 from i
                        {
                            counter2++;
                        }

                        else
                        {
                            sum = sum + abs(counter2 - counter1);        /// calculating the time it took
                            break;
                        }
                    }

                    break;
                }
            }
        }

        cout << sum << endl;
    }
}

///   trying to find an element's position in an order

///   traversing arrays
