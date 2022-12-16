#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int row, col;
        cin >> row >> col;

        if(row==1 || col==1 || (row==2 && col==2) )       /// the only occasions when we can solve the puzzle
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

///   math
