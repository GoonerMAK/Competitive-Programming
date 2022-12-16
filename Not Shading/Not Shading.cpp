#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int row, col, x, y, counter=0, flag_row=0, flag_col=0;
        cin >> row >> col >> x >> y;

        char arr[row][col];

        for(int i=0 ; i<row ; i++)
        {
            for(int j=0 ; j<col ; j++)
            {
                scanf(" %c", &arr[i][j]);            ///  " %c"

                if(arr[i][j] == 'B')                ///  checking for black cells
                {
                    counter++;                     ///  incrementing counter
                }
            }
        }

        if(arr[x-1][y-1] == 'B')                /// if that particular cell is already black then we don't have to perform any operations
        {
             cout << "0" << endl;
        }

        else if(counter == 0)                     /// if counter is 0 then it means there's no black cells... so can't turn x,y cell into a black one
        {
            cout << "-1" << endl;                ///  so... we need at least 1 black cell to turn a cell black
        }

        else
        {
            for(int i=(x-1), j=0 ; j<col ; j++)         ///  looking for a black cell in that particular row
            {
                if(arr[i][j] == 'B')
                {
                    flag_row = 1;
                }
            }

            for(int j=(y-1), i=0 ; i<row ; i++)          /// looking for a black cell in that particular column
            {
                if(arr[i][j] == 'B')
                {
                    flag_col = 1;
                }
            }

            if( flag_row == 1 || flag_col == 1 )      /// if we find at least one such cell then we can turn that into a black one... in just one operation
            {
                cout << "1" << endl;
            }

            else                                   /// otherwise we'll be needing total of 2 operations
            {
                cout << "2" << endl;
            }

        }

   }

   return 0;
}


///    Input into 2D array (with characters)

///    traversing a 2D array (row wise and col wise)

///    Grid
