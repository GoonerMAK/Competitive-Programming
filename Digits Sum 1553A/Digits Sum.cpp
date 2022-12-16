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

        int ans = n/10;

        if(n%10 == 9)          /// if the last digit is 9 then there will be one more "interesting" number than n/10... 9, 19, 29, 39 all are "interesting" numbers
        {
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}

///  there's one "interesting" number in every 10 numbers starting from 9

/// number theory
