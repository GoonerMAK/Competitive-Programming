#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, flag = 1;
        cin >> n;

        int arr[n];

        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i];
        }

        for(int i=0 ; i<(n-1) ; i++)
        {
            if( (arr[i+1] % arr[i] ) != 0 )
            {
                flag = 0;
                break;
            }
        }


        if( flag == 0 )
        {
            cout << "NO" << endl;
        }

        else
        {
            cout << "YES" << endl;
        }
    }
}
