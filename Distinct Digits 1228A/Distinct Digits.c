#include<stdio.h>
int main()
{
    int num1, num2, i, j, flag;

    scanf("%d %d", &num1, &num2);

    for(i = num1 ; i <= num2 ; i++)              ///  iterating from num1 to num2 (l to r)
    {
        int flag = 0, arr[10]={0};              ///  there are 10 digits... 0 to 9
        num1 = i;

        while(num1 > 0)
        {
            arr[num1%10]++;                     ///  Checking the last digit

            if( arr[num1%10] > 1 )             /// checking occurrences of a particular digit ( all values of the Array arr[] should be less than 2 in case of a Distinct number )
            {
                flag++;
                break;
            }

            num1 = num1/10;
        }

        // printf("flag is %d\n", flag);

        if(flag==0)                            /// if flag is zero that means that the number has Distinct digits
        {
            printf("%d", i);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
