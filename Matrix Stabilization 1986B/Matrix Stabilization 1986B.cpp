#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
  
    while(t--)
    {
        int row = 0, col = 0;
        cin >> row >> col;
        row = row + 2;
        col = col + 2;                                             //  To make the outer row and columns filled with zero(s) - Adding extra rows and columns at the ends

        vector<vector<int>> arr(row, vector<int>(col, 0));       // all zero(s)

        for(int i=1 ; i<(row-1) ; i++)
        {
            for(int j=1 ; j<(col-1) ; j++)
            {
                cin >> arr[i][j];
            }
        }

        for(int i=1 ; i<(row-1) ; i++)
        {
            for(int j=1 ; j<(col-1) ; j++)
            {
                int up = arr[i-1][j];
                int down = arr[i+1][j];
                int left = arr[i][j-1];
                int right = arr[i][j+1];

                int max_val = max({up, down, left, right});
                
                if(arr[i][j] > max_val )
                {
                    arr[i][j] = max_val;
                }
            }
        }

        for(int i=1 ; i<(row-1) ; i++)
        {
            for(int j=1 ; j<(col-1) ; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }    
    }

    return 0;
}