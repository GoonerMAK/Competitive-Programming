#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k, too_tall = 0;
        cin >> n >> k;

        int arr[n];

        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i];
        }

        if( k == 1 )
        {
            if( n%2 == 0 )
            {
                n--;
            }

            too_tall = n/2;
        }


        else
        {
            for(int i=1 ; i<(n-1) ; i++)
            {
                if( arr[i] >  ( arr[i-1] + arr[i+1] )  )
                {
                    too_tall++;
                }
            }
        }


        cout << too_tall << endl;
    }

    return 0;
}
