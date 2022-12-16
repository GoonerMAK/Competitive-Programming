#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long int n, zero = 0, ans = 0, non_zero = 0;
        cin >> n;

        long long int arr[n];

        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i];
        }

        for(int i=0 ; i<(n-1) ; i++)
        {

            if( arr[i] != 0 )
            {
                ans = ans + arr[i];
                non_zero++;
            }

            else if( arr[i] == 0  &&  non_zero > 0 )
            {
                ans++;
            }

        }

        cout << ans << endl;
    }

    return 0;

}
