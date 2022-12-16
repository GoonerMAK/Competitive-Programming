#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, sum1 = 0, sum2 = 0;
    cin >> n >> m;

    long long arr[m], brr[m], ans[m];

    for(int i=0, j=0, k=0 ; i<(m*2) ; i++)
    {
        if(i%2 == 0)
        {
            cin >> arr[j];
            j++;
        }

        else
        {
            cin >> brr[k];
            k++;
        }
    }


    for(int i=0 ; i<m ; i++)
    {
        sum1 = sum1 + arr[i];

        sum2 = sum2 + brr[i];
    }


    if( sum1 <= n  &&  sum2 >= n )
    {
         if( sum1 >= n )
         {
             for(int i=0 ; i<m ; i++)
             {
                 cout << arr[i] << " ";
             }
         }


         else
         {
             long long needed = n-sum1;
             int i = 0;

             while(needed != 0)
             {

                 if( arr[i] < brr[i] )
                 {
                     arr[i] = arr[i] + 1;
                     needed--;
                 }

                 else
                 {
                     i++;
                 }

             }

             for(int j=0 ; j<m ; j++)
             {
                 cout << arr[j] << " ";
             }

         }

    }


    else
    {
        cout << "-1" << endl;
    }

//    for(int i=0 ; i<m ; i++)
//    {
//        cout << arr[i] << " " << brr[i] << endl;
//    }

//    cout << "Lowest_sum: " << sum1 << "   Max_sum: " << sum2 << endl;



return 0;

}
