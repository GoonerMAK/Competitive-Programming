#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long ships, kraken_attacks, sum=0, ans=0;
        cin >> ships >> kraken_attacks;

        vector<long> arr(ships);

        for(int i=0; i<ships; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        if( kraken_attacks >= sum )         // If the attacks are greater that the durabilities (First Case)
        {
            cout << ships << endl;
            continue;
        }

        // Kraken attacks first of the ships, then the last, then first again and so on..  (Second Case: Ships have enough durability)
        long long from_start = kraken_attacks / 2 + (kraken_attacks % 2 != 0);
        long long from_end = kraken_attacks / 2;

        // Attacks at both sides have been halved (Front side will have one more attack power if k is odd)
        // Iterate over the ships until attack power reaches less or equal than zero (0) for both sides

        for(int i=0; i<ships ; i++)             // Attacks at the front 
        {
            if( (from_start - arr[i]) >= 0   &&  (from_start > 0) )
            {
                ans++;
                from_start -= arr[i];
            }

            else
                break;
        }

        for(int i=(arr.size() - 1); i>=0 ; i--)      // Attacks at the back 
        {
            if( (from_end - arr[i]) >= 0  &&  (from_end > 0))
            {
                ans++;
                from_end -= arr[i];
            }

            else
                break;
        }

        cout << ans << endl;

    }

    return 0;
}