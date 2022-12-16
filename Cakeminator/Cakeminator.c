///                      input in 2D array                         ///
///   Scanning while omitting new line or white space characters  ///

#include<stdio.h>
int main()
{
    int row, col, i, j, count=0, ans, row_num=0, col_num=0;
    char ch;
    scanf("%d %d", &row, &col);
    char arr[row][col];

    for(i=0 ; i<row ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            scanf(" %c", &arr[i][j]);                    /// " %c"
        }
    }

    for(i=0 ; i<row ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            if( arr[i][j] == 'S' )
            {
                count++;
                break;
            }
        }

        if(count == 0)
        {
            col_num++;
        }
        count = 0;
    }

    for(i=0 ; i<col ; i++)
    {
         for(j=0 ; j<row ; j++)
         {
             if( arr[j][i] == 'S' )
            {
                count++;
                break;
            }
         }

         if(count == 0)
        {
            row_num++;
        }
        count = 0;
    }

    ans = (row*row_num) + (col*col_num) - (row_num*col_num);

    printf("%d", ans );

    return 0;
}
