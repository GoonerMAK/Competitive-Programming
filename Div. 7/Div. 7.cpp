#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int num;
        cin >> num;

        if(num%7==0)             ///  when it's already divisible by 7
        {
            cout << num << endl;
        }

        else
        {
            num = num - (num%10);       /// turn the right most digit to 0... then look for a number that is divisible by 7

            while(num % 7 != 0)
            {
                num++;
            }

            cout << num << endl;
        }

    }

    return 0;
}

///  use of remainder
