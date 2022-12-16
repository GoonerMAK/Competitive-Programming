#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, counter=1;          ///  there will be at least one loser... that's why we have set "counter" to 1... later we will subtract "counter" from n... (because, winners = participants - losers )
        cin >> n;
        int arr[n];

        for(int i=0 ; i<n ; i++)
            cin >> arr[i];

        sort(arr, arr+n);

        for(int i=0 ; i<(n-1) ; i++)
        {
            if(arr[i] == arr[i+1])            ///  since we sorted the array
            {
                counter++;                   ///   "counter" will increment as long as there are same leveled heroes from the beginning... (we're basically keeping track of how many heroes can't win the tournament)
            }

            else
            {
                break;                      ///    we only need one hero who's level is higher than the smallest one... (the rest of the heroes are possible winners) (because each win increases one's level and same heroes can fight each other again and again)
            }
        }

        cout << n-counter << endl;         ///    possible winners = participants - losers
    }

    return 0;
}

///   sorting

//    int k=0;
//    while (a[k]==a[0])
//    {
//        k++;
//    }
//
//    cout<<n-k<<endl;
