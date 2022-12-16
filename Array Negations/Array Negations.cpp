#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, operations;
        cin >> n >> operations;

        int a[n];
        long long sum=0;

        for(int i=0; i < n; i++)
        {
            cin >> a[i];
        }

        while(operations--)
        {
            int i=0;

            int min_a = *min_element(a, a+n);

            if(a[i] == 0)
            {
                break;
            }

            else
            {
                a[i]=a[i]*(-1);
                sort(a, a+n);
                i=-1;
            }

            i++;
        }

        for(int i=0; i<n; i++)
        {
            sum+=a[i];
        }

        cout << sum << endl;
    }

    return 0;
}

 /// since we sorted the array... we will negate the negative numbers first... if we run out of negative numbers then we will start negating from the smallest positive number... (unless there's a zero... in that case we can perform the operations on zero)

///  first we have to negate the negative numbers... then if there's a zero... we could just perform the "negation operation" on it as many times as we want (since negating zero helps us get the maximal sum of the array)

///  critical thinking

///  Negation operations

///  sort (ascending order)
