#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int arr[2 * (int)1e5];

    while(t--)
    {
        int n, card, ans=0;
        cin >> n;
            
        fill(arr, arr + n, 0);
        
        for(int i=0 ; i<n ; i++)
        {
            cin >> card;

            if ( arr[card-1] > 0 )        // If the card already exists in the hand, then now... it's a pair
            {
                ans++;                  // If played optimally, I would get as many points as the number of pairs i've got
                continue;
            }

            arr[card-1]++;          
        }
        cout << ans << endl;
    }
    return 0;
}