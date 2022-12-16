#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, sum=0;
        cin >> n;

        while(n>=10)                  ///  Mishka gets 1 dollar cashback for every 10 dollar spent
        {
            sum = sum + ( n - (n%10) );

            n = n/10 + (n%10);
        }

        cout << sum+n << endl;              /// adding the leftover n
    }

    return 0;
}

///  n = 354

///  sum = 0 + 354 - 4  = 350    n is now 354/10 + 354%10 = 35+4 = 39
///  sum = 350 + 39 - 9 = 380    n is now 39/10  + 39%10  = 3+9  = 12
///  sum = 380 + 12 - 2 = 390    n is now 12/10  + 12%10  = 1+2  = 3
///  sum = 390 + 3      = 393    which is the answer

///  performing operations (any number of times)

///  use of remainder
