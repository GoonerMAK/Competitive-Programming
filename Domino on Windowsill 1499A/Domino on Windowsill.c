#include<stdio.h>
int main()
{
    int tests, i;
    scanf("%d", &tests);

    while(tests--)
    {
        int n, row1, row2, white, black;
        scanf("%d %d %d %d %d", &n, &row1, &row2, &white, &black);

        if( (white <= (row1 + row2)/2) && (black <= ( (2*n - (row1+row2) )/2) ) )       /// row1+row2 = number of white cells
        {                                                                              ///  2*n - (row1+row2) = number of black cells
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}


///   if the number of white and black dominoes are less or equal than the number of white and black cells
///   then it's possible to place all the dominoes on the grid...
///   otherwise it won't be possible
