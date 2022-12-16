#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, arr[101]={0}, ans=0, num;
        cin >> n;

        for(int i =0 ; i<n ; i++)
        {
            cin >> num;

            num = abs(num);

            arr[num]++;
        }

        if(arr[0] > 0)        /// no matter how many zero(s) there are... it will only count as one distict element
        {
            ans = 1;
        }

        for(int i=1 ; i<=100 ; i++)
        {
            if(arr[i] > 1)
            {
                ans = ans + 2;
            }

            else
            {
                ans = ans + arr[i];         /// this arr[i] can either be 0 or 1
            }
        }

        cout << ans << endl;

    }

    return 0;
}
