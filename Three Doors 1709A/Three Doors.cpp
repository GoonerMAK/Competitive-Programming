#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x, arr[3];
        cin >> x;

        for(int i=0 ; i<3 ; i++)
        {
            cin >> arr[i];
        }

        if( arr[x-1] != 0 )
        {

            if(  arr[ arr[x-1] - 1] != 0  )
            {
                cout << "YES" << endl;
            }

            else
            {
                cout << "NO" << endl;
            }

        }

        else
        {
            cout << "NO" << endl;
        }

    }


    return 0;
}
