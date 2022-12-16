#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int row, col, robot_row, robot_col, dirt_row, dirt_col, ans=0;

        cin >> row >> col >> robot_row >> robot_col >> dirt_row >> dirt_col;

        if(robot_row == dirt_row || robot_col == dirt_col)
        {
            cout << ans << endl;
        }

        else                    ///  if robot rows/cols doesn't match with dirt rows/cols
        {
             if( robot_row > dirt_row && robot_col > dirt_col )
             {
                  ans = ( (row-robot_row  +  row-dirt_row) > (col-robot_col  + col-dirt_col) ) ? (col-robot_col  + col-dirt_col) : (row-robot_row  +  row-dirt_row);
             }

             else if( robot_row > dirt_row && robot_col < dirt_col )
             {
                 ans = ( (row-robot_row  +  row-dirt_row) > (dirt_col - robot_col) ) ? (dirt_col - robot_col) : (row-robot_row  +  row-dirt_row);
             }

             else if( robot_row < dirt_row && robot_col > dirt_col )
             {
                 ans = ( (dirt_row-robot_row) > (col-robot_col  + col-dirt_col) ) ? (col-robot_col  + col-dirt_col) : (dirt_row-robot_row);
             }

             else if( robot_row < dirt_row && robot_col < dirt_col )
             {
                 ans = ( (dirt_row-robot_row) > (dirt_col - robot_col) ) ? (dirt_col - robot_col) : (dirt_row-robot_row);
             }

             cout << ans << endl;
        }

    }

    return 0;
}

///   the 4 cases are....

///   rr > dr && rc > dc
///           && rc < dc
///   rr < dr && rc > dc
///           && rc < dc

///   (rr = robot row, rc = robot col, dr = dirt row, dc = dirt col)
