#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long l1, l2, l3;
        cin >> l1 >> l2 >> l3;

        if(l1 == l2+l3 || l2 == l1+l3 || l3 == l1+l2)
        {
            cout << "YES" << endl;
        }

        else if( (l1 == l2 && l3%2==0)  ||  (l1 == l3 && l2%2==0)  || (l2 == l3 && l1%2==0) )         /// one side should be even
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }

    }

    return 0;
}
