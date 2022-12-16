#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, num, flag=0, small = 200001, position;
        cin >> n;

        int arr1[n] = {0}, arr2[n];                   /// arr1[] will help us identify distinct numbers and arr2[] will store all the numbers

        for(int i=0 ; i<n ; i++)
        {
            cin >> num;
            arr1[num-1]++;                           /// (num-1)... because of array indexing
            arr2[i] = num;
        }

        for(int i=0 ; i<n ; i++)
        {
            if(arr1[arr2[i]-1] == 1 && arr2[i]<small )    /// arr1[ arr2[i]-1 ] = arr2[i] is the number... we are checking whether that number is distinct or not by inserting it in the 1st array... "-1" because of the array indexing
            {
                small = arr2[i];                  /// since the auction is won by the smallest distinct number
                position = i+1;
                flag = 1;
            }

        }

        if(flag == 0)
        {
            cout << -1 << endl;
        }

        else
        {
            cout << position << endl;
        }
    }

    return 0;
}

///  Distinct numbers

///  Finding the position of a particular element in an array
