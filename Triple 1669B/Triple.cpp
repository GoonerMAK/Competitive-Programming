#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, counter=1, ans=-1;         /// the answer will remain -1 unless there's a number that appears three times in the array
        cin >> n;
        int arr[n];

        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr+n);

        for(int i=0 ; i < n ; i++)
        {
            if(arr[i] == arr[i+1])             ///   since the array is now sorted in ascending order
            {
                counter++;                    ///  incrementing counter whenever two numbers are the same in the order...

                if(counter == 3)
                {
                    ans = arr[i];             ///  whenever the counter is 3... it means that a certain number appeared in the array 3 times...
                    break;
                }
            }

            else
            {
                counter=1;               ///   When two numbers are not the same in the order...
            }
        }

        cout << ans << endl;
    }

    return 0;
}


///  Sortings

///  Counting the number of elements with same values in an Array

///  Counting the number of appearances that a particular element has in an array
