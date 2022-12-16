#include<stdio.h>
int main()
{
    int tests;
    scanf("%d", &tests);

    while(tests--)
    {
        int i, n, limit, count=0;
        int min = 10001, min_pos = 0;
        scanf("%d %d", &n, &limit);

        int piles[n];

        for(i=0 ; i<n ; i++)
        {
            scanf("%d", &piles[i]);

            if( piles[i] < min )
            {
                min = piles[i];                    ///  Determining the smallest number
                min_pos = i;                      ///   Determining the index of the smallest number
            }
        }

        for(i=0 ; i<n ; i++)
        {
            if(min_pos != i)                      ///  so that it doesn't count the index of the smallest number
            {
                count = count + ( limit - piles[i] )/min ;       ///  Counting the number of times we have to add the smallest number to a particular pile (until it reaches the limit)
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
