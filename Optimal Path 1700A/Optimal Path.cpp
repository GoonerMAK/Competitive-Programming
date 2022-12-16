#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n, m, sum1 = 0, sum2 = 0, sum = 0;

        cin >> n >> m;

        long long temp = n, multiply = 1;

        sum1 = (m*(m+1))/2;

        while(temp--)
        {
            sum2 = (m * multiply) + sum2;
            multiply++;
        }

        sum = sum1 + sum2 - m;

        cout << sum << endl;

        // cout <<  "Sum1 = " << sum1 << "   Sum2 = " << sum2 << "  Sum : " << sum << endl;
    }
}
