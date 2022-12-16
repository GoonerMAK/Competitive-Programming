#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, quests;
    cin >> n >> quests;

    int arr[n];

    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    for(int i=0 ; i<quests ; i++)
    {
        int a, b;
        long long ans = 0;
        cin >> a >> b;

        if( a>b )
        {

             for(int j=(a-1) ; j>(b-1) ; j--)
             {
                 if( arr[j-1] < arr[j] )
                 {
                     ans = ans + arr[j] - arr[j-1];
                 }
             }

        }


        else                         ///  b>a
        {
             for(int j=(a-1) ; j<(b-1) ; j++)
             {
                 if( arr[j+1] < arr[j] )
                 {
                     ans = ans + arr[j] - arr[j+1];
                 }
             }
        }


        cout << ans << endl;
    }



    return 0;
}
