#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tests, i;
    cin >> tests;

    while(tests--)
    {
        int n;
        cin >> n;

        long long int a[n], b[n], sum=0, min_a, min_b, minimun =1000000001;

        for(i=0 ; i<n ; i++)
        {
            cin >> a[i];
            min_a = min(a[i], minimun);
        }

        for(i=0 ; i<n ; i++)
        {
            cin >> b[i];
            min_b = min(b[i], minimun);
        }

        for(i=0 ; i<n ; i++)
        {
            sum = sum + min( (a[i]-min_a) , (b[i]-min_b) ) + abs( (a[i]-min_a) - (b[i]-min_b) );
        }

        cout << sum << endl;
    }

    return 0;
}
