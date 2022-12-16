#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, lowest, highest, budget, bar=0;
        cin >> n >> lowest >> highest >> budget;

        int arr[n];
        long long sum=0;

        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr+n);                   /// our goal is to buy as many chocolate bars as possible... that's why we should start buying from the lowest acceptable price (sorting the array makes it easier for us)

        for(int i=0 ; i<n ; i++)
        {
            if( arr[i] >= lowest && arr[i] <= highest)                 ///  arr[i] >= l && arr[i] <= r
            {
                sum = sum + arr[i];

                if(sum <= budget)           /// has to be within our budget
                {
                    bar++;
                }
            }
        }

        cout << bar << endl;
    }

    return 0;
}

///  math

///  sort
