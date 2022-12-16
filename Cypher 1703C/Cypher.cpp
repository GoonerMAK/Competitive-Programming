#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int arr[n], brr[n];

        for(int i=0 ; i<n ; i++)
        {
            int digit;
            cin >> digit;

            arr[i] = digit;
        }


        for(int i=0 ; i<n ; i++)
        {
            int num;
            int diff = 0;
            string s;

            cin >> num >> s;

            for(int j=0 ; j<num ; j++)
            {


                if(s[j] == 'U')
                {
                    diff--;
                }

                else
                {
                    diff++;
                }

            }

            brr[i] = diff;
        }


        for( int i=0 ; i<n ; i++)
        {
            arr[i] = arr[i] + brr[i];

            if( arr[i] > 9 )
            {
                arr[i] = arr[i]%10;
            }

            else if( arr[i] < 0 )
            {
                arr[i] = 10 + arr[i];
            }

        }

        for(int i=0 ; i<n ; i++)
        {
            cout << arr[i] << " ";
        }

        puts("");

    }

    return 0;
}
