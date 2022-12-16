#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int tasks;
        cin >> tasks;

        int given_time[tasks], done_time[tasks], ans[tasks];

        for(int i=0 ; i<tasks ; i++)
        {
            cin >> given_time[i];
        }

        for(int i=0 ; i<tasks ; i++)
        {
            cin >> done_time[i];
        }

        ans[0] = done_time[0] - given_time[0];

        for(int i=1 ; i<tasks ; i++)
        {
            if(given_time[i] > done_time[i-1] )
            {
                ans[i] = done_time[i] - given_time[i];
            }

            else
            {
                ans[i] = done_time[i] - done_time[i-1];
            }
        }


        for(int i=0 ; i<tasks ; i++)
        {
            cout << ans[i] << " ";
        }

        puts("");

    }

    return 0;
}
