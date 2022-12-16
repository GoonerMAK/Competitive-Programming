#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 49};      /// 16 numbers

    for(int i=0 ; i<16 ; i++)
    {
        if(arr[i] == n)
        {
             if(arr[i+1] == m)
             {
                 cout << "YES" << endl;
                 return 0;
             }

             else
             {
                 cout << "NO" << endl;
                 return 0;
             }
        }
    }
}

/// brute force

/// prime numbers
