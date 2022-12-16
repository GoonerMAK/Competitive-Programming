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
        int arr[n];

        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i];
        }
                                        /// Question: You have an array a of length n. You can exactly once select an integer len between 1 and n−1 inclusively, and then sort in non-decreasing order the prefix of the array of length len and the suffix of the array of length n−len independently.
                                        /// For example, if the array is a=[3,1,4,5,2], and you choose len=2, then after that the array will be equal to [1,3,2,4,5].
        if( is_sorted(arr, arr+n ) )    /// Could it be that after performing this operation, the array will not be sorted in non-decreasing order?
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

///  suffix and prefix of an Array

///  sorting

///  if the array isn't already sorted then there's always a way where the array won't be sorted in non-decreasing order (after performing the operation that is)
///  when an array isn't sorted, indexes i < j and Ai > Aj (is this case we can always choose a len where the array will still be not sorted)
