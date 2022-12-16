#include<stdio.h>
#include<math.h>
int main()
{
    int i, num, count=0, diff;
    scanf("%d", &num);
    char combination1[num+1], combination2[num+1];

    scanf("%s %s", combination1, combination2);

    for(i=0 ; i<num ; i++)
    {
        diff = abs( combination1[i] - combination2[i] );     ///  if the difference is over 5 then one needs to rotate the disk in the opposite direction

        if( diff > 5)
        {
            count = count + 10 - diff ;                    ///    in that case we need to subtract the difference from 10
        }

        else
        {
            count = count + diff ;                      ///  otherwise we just need to add the difference
        }
    }

    printf("%d", count);

    return 0;
}
