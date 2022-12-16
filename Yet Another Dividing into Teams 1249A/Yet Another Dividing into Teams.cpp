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

        sort(arr, arr+n);

        for(int i=0 ; i<n ; i++)
        {
            if( (i>0) && (abs(arr[i] - arr[i-1])) == 1 )        ///  if we find some elements that satisfy this --> (abs(arr[i] - arr[i-1])) == 1...  then we have to divide the numbers into 2 teams... (bear in mind that there can only be distinct numbers)
            {
                flag = 0;
                break;
            }
        }


        if(flag == 1)                           ///  we can just form only one team when this --> (abs(arr[i] - arr[i-1])) == 1 doesn't happen (since we have to form minimal teams as possible)
        {
            cout << "1" << endl;
        }

        else
        {
            cout << "2" << endl;
        }

    }

    return 0;
}

///   critical thinking

///   math

