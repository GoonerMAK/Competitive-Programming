#include<stdio.h>
int main()
{
    int tests, size, i;
    scanf("%d", &tests);

    while(tests--)
    {
        scanf("%d", &size);
        int countA=0, countP=0, max=0;
        char group[size+1];
        scanf("%s", group);

        for(i=0 ; i<size ; i++)
        {
            if( group[i] == 'A' )
            {
                countA=1;
                countP=0;                       ///  countP will restart whenever it sees an 'A'
            }

            else if( countA > 0 )
            {
                countP++;
                if(countP >= max)
                {
                    max = countP;              ///  The time it takes to reach the "last moment" is equals to the max number of 'P's in a row...
                }
            }
        }

        printf("%d\n", max);
    }

    return 0;
}
