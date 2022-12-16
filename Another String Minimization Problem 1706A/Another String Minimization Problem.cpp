#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,m;
        cin >> n >> m;

        int arr[n] = {0};

        int brr[m] = {0};

        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i];

            if( m%2 == 0  &&  arr[i] > (m/2) )
            {
                arr[i] = m + 1 - arr[i];
            }

            else if( m%2 != 0  &&  arr[i] > (m+1)/2 )
            {
                arr[i] = m + 1 - arr[i];
            }


        }


        for(int i=0 ; i<n ; i++)
        {

            if( brr[ arr[i]-1 ] == 0 )
            {
                brr[ arr[i]-1 ] = 1;
            }

            else
            {
                brr[ m + 1 - arr[i]-1 ] = 1;
            }
        }



        for(int i=0 ; i<m ; i++)
        {
            if( brr[i] == 1 )
            {
                cout << "A";
            }

            else
            {
                cout << "B";
            }
        }

        puts("");
    }

    return 0;
}
