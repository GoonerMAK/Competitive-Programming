#include<stdio.h>
int main()
{
    int tests, num;
    scanf("%d", &tests);

    while(tests--)
    {
        scanf("%d", &num);
        int temp = num, even=0;

        while(temp>9)                    ///  iterating till the number is of 2 digits...
        {
            temp = temp/10;

            if(temp%2==0)
            {
                even++;                  ///  incrementing if there's an even digit
            }
        }

        if(num%2==0)
        {
            printf("0\n");               ///  if the number is already even...
        }

        else if( temp%2 == 0 )           ///  temp contains the first digit of the number....
        {
            printf("1\n");               ///  we have to perform the operation only once if the first digit is even...
        }

        else if(even>0)                  ///  if there's at least one even number then we have to perform the operation twice (that is if the other conditions are false)
        {
            printf("2\n");               ///  i.e.  354117 --> 453117 --> 711354
        }

        else
        {
            printf("-1\n");              ///  if there's no even digits...
        }

    }

    return 0;
}
