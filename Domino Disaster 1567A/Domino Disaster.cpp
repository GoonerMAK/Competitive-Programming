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
        string domino;
        cin >> domino;

        for(int i=0 ; i<n ; i++)
        {
            if(domino[i] == 'U')
            {
                domino[i] = 'D';
            }

            else if(domino[i] == 'D')
            {
                domino[i] = 'U';
            }
        }

        cout << domino << endl;
    }

    return 0;
}

///  strings
