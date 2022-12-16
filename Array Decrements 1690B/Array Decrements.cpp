#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, j=0, flag = 1;
        cin >> n;

        int a[n], b[n], arr[n]={0};

        for(int i=0 ; i<n ; i++)
        {
            cin >> a[i];
        }

        for(int i=0 ; i<n ; i++)
        {
            cin >> b[i];
        }


        for(int i=0 ; i<n ; i++)
        {
            if(b[i] > a[i])
            {
                flag = 0;
            }

            else if(b[i] != 0)
            {
                arr[j] = a[i] - b[i];
                j++;
            }
        }


        for(int i=0 ; i<(j-1) ; i++)
        {
            if( arr[i] < 0 )
            {
                flag = 0;
            }

            else if(arr[i] != arr[i+1])
            {
                flag = 0;
            }

        }

        if(flag == 0)
        {
            cout << "NO" << endl;
        }

        else
        {
            cout << "YES" << endl;
        }

    }

    return 0;
}
