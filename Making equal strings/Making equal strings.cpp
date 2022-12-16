#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int flag=0, n;
        cin >> n;
        string s,t;
        cin >> s >> t;

        for(int i=0 ; i< n ; i++)
        {
            if(t[i] == 'o')
            {
                flag=1;
                cout << "YES\n";
                break;
            }
        }

        if(flag==0)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
