#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int hour[n], minute[n];

    for(i=0 ; i<n ; i++)
    {
        cin >> hour[i] >> minute[i];
    }

    int stores=1, max_stores=0;

    for(i=0 ; i<n ; i++)
    {
        if( hour[i] == hour[i+1] && minute[i] == minute[i+1] )
        {
            stores++;
        }

        else
        {
            stores = 1;
        }

        if( stores >= max_stores )
        {
            max_stores = stores;
        }
    }

    if(n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    cout << max_stores << endl;

    return 0;
}
