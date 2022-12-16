#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, zero = 0, non_zero = 0, Count = 0;
        cin >> n;

        int arr[n];

        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i];


            if(arr[i] == 0  &&  non_zero > 0)
            {
                zero++;
                non_zero = 0;
                Count++;
            }

            else if( arr[i] != 0 )
            {
                non_zero++;
            }


        }

        if(non_zero > 0)
        {
            Count++;
        }


        if( Count > 2 )
        {
            cout << "2" << endl;
        }

        else
        {
            cout << Count << endl;
        }

    }

    return 0;
}
