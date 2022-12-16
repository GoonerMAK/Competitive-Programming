#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, num, even=0, odd=0;
        cin >> n;

        for(int i=0 ; i<n ; i++)
        {
            cin >> num;
            (num%2==0 ? even++ : odd++);
        }

        if(even==0)                    ///  if there's no even number then... we have to check number of odd numbers... for a odd sum we need odd number of odd numbers
        {
            (odd%2!=0 ? puts("YES") : puts("NO") );
        }

        else if(odd==0)              /// the sum can't be odd if there's no odd number
        {
            puts("NO");
        }

        else                       ///   every other case we just need at least one odd and at least one even number
        {
            puts("YES");
        }
    }

    return 0;
}


///  performing operations (any number of times)
