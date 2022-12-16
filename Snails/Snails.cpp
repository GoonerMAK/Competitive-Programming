#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, up, down, Count=0;

        cin >> n >> up >> down;

        if( (up-down) > 0 )
        {
            while(n>0)
            {
                n = n - up;
                Count++;                         ///  incrementing every time (n = n - up) is done
                if( n <= 0 )                    /// if it reaches the ground during the daytime
                {
                    cout << Count << endl;
                    break;
                }
                n = n + down;                 /// going down during night time
            }

        }

        else if(up >= n)                 /// in this case it can reach the ground in just one try
        {
            cout << "1" << endl;
        }

        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}
