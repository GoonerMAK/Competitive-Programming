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

        long long arr[n], lowest=1000000001, index=0;

        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i];

            if(arr[i] < lowest)
            {
                lowest = arr[i];
                index = i+1;             ///  adding 1 with the index of array
            }
        }

        // cout << "lOWEST: " << lowest << "   Index: " << index << endl;

        if( n == 1)
        {
            cout << "Mike" << endl;
        }

        else if( n % 2 == 1 )            ///
        {

            if(lowest % 2 == 1)
            {
                if( index % 2 == 1 )            ///
                {
                    cout << "Mike" << endl;
                }

                else if( index % 2 == 0 )
                {
                    cout << "Joe" << endl;       ///
                }
            }

            else
            {
                if( index % 2 == 1 )            ///
                {
                    cout << "Joe" << endl;
                }

                else if( index % 2 == 0 )
                {
                    cout << "Mike" << endl;       ///
                }
            }

        }


        else if( n % 2 == 0 )
        {

            if( index % 2 == 1 )            ///
            {
                cout << "Joe" << endl;
            }

            else if( index % 2 == 0 )
            {
                cout << "Mike" << endl;       ///
            }

        }


    }

    return 0;

}





