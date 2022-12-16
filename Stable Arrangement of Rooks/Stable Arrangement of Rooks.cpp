#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, rooks, Count=1;
        cin >> n >> rooks;

        if(rooks > ( (n/2) + n%2 ) )              /// patterns
        {
            cout << "-1" << endl;
        }

        else
        {
            for(int i=0 ; i<n ; i++)
            {
                 for(int j=0 ; j<n ; j++)
                 {
                     if(i==j && i%2==0 && j%2==0 && Count<=rooks)       /// (0,0) , (2,2) , (4,4) because of array indexing
                     {
                         cout << "R";
                         Count++;
                     }

                     else
                     {
                         cout << ".";
                     }
                 }

                 cout << "\n";
            }
        }
    }

    return 0;

}
