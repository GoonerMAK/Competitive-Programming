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
        int arr[n], sequence[n], first=0, last=(n-1);

        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i];
        }

        for(int i=0 ; i<n ; i++)
        {
            if(i%2==0)
            {
                sequence[i] = arr[first];              /// adding from the first
                first++;
            }

            else
            {
                sequence[i] = arr[last];               /// adding from the last
                last--;
            }
        }

        for(int i=0 ; i<n ; i++)
        {
            cout << sequence[i] << " " ;
        }

        puts("");
    }

    return 0;
}


///   Modifying The array

///   Converting this ---> a1 a2 a3 a4 a5 a6

///      to this      ---> a1 a6 a2 a5 a3 a4
