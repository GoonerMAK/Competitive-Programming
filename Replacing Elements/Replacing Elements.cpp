#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, value, flag=0;
        cin >> n >> value;

        int arr[n];

        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i];

            if(arr[i] > value)       /// if an element is bigger than value then flag will be 1
            {
                flag=1;
            }
        }

        sort(arr, arr+n);                  ///  to make all the elements lower or equal to "value"... first we have to check if flag is 1 or not... if it's zero that means we don't have to perform any operations

        if( flag==1 && (arr[0]+arr[1] > value) )      /// if flag is '1' then we have to check if the sum of the smallest two elements of the array is smaller or equal than "value"
        {
            cout << "NO" << endl;                  ///   if it's bigger than "value" we can simply say that it's impossible
        }

        else
        {
            cout << "YES" << endl;               ///  otherwise it's possible...
        }

    }

    return 0;
}

///    sortings

///    math
