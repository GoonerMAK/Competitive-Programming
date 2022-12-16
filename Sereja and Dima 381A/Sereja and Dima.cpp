#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sereja=0, dema=0;
    cin >> n;

    int arr[n], i=0, j=n-1;

    for(int k=0 ; k<n ; k++)
    {
        cin >> arr[k];
    }

    for(int k=0 ; k<n ; k++)
    {
        if(k%2==0)                         /// sereja goes first (whenever k is even)
        {
             if(arr[i] > arr[j])
             {
                 sereja = sereja + arr[i];
                 i++;                          ///  choses the leftmost number
             }

             else
             {
                 sereja = sereja + arr[j];
                 j--;                       ///  choses the rightmost number
             }
        }

        else                             /// whenever k is odd
        {
             if(arr[i] > arr[j])
             {
                 dema = dema + arr[i];
                 i++;
             }

             else
             {
                 dema = dema + arr[j];
                 j--;
             }
        }
    }

    cout << sereja << " " << dema << endl;

    return 0;
}
