#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for( int i=1 ; i<=t ; i++)
    {
        int a, b, c, sum = 0;
        cin >> a >> b >> c;

        sum = a + b + c;

        cout << "Case " << i << ":";

        if( sum % 3 == 0 )
        {
            cout << " Peaceful" << endl;
        }

        else
        {
            cout << " Fight" << endl;
        }

    }

    return 0;
}



