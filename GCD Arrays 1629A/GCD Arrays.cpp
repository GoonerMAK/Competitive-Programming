#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l, r, operations, odds, total;
        cin >> l >> r >> operations;

        if( r == 1 )                           ///   if r==1 then it's impossible to get a GCD greater than 1
        {
            cout << "NO" << endl;
        }

        else if(l == r)                      ///   it is guaranteed that we will get a GCD greater than 1
        {
             cout << "YES" << endl;
        }

        else
        {
            total = (r - l + 1);       ///  total number of elements in the array

            odds = total/2;           ///   odds = number of odd elements

            if( l%2==1 && r%2==1 )    ///   if l and r are both odd then the number of odd will increase by one
            {
                odds++;
            }

            cout << (odds <= operations ? "YES" : "NO") << endl;
        }
    }

    return 0;
}

///   since the numbers are consecutive, the most common prime factor (which is greater than 1) is always 2 (there's an even number in every two numbers)
///   to make the GCD greater than 1... we must perform the operation at least "odds" times...(odds = number of odd numbers) (if the size of the array is bigger than 1)


///  GCD

///  Number theory
