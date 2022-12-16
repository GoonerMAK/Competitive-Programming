#include<stdio.h>
int main()
{
    int tests, i, digits;

    scanf("%d", &tests);

    while(tests--)
    {
        int sum=0;
        scanf("%d", &digits);
        char arr[digits+1];                         ///  size = digits + 1

        scanf("%s", arr);

        for(i=0 ; i< digits-1 ; i++)               ///  iterating till the 2nd last digit of the string  (digits-1)
        {
            sum = sum + arr[i] - 48;              ///   ASCII value of '0' is 48 ( or we could just write arr[i]-'0' )

            if(arr[i] != '0' )
            {
                sum++;                            ///  if a particular character is not 0 then we have to increment "sum" by 1 because we have to perform the "swap" operation for that character
            }
        }

        sum = sum + arr[digits-1] - 48;           ///  last element of the Array = arr[digits-1]

        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}



///    To make the clock show 0... firstly we have to perform the "decrease" operation as many times as the rightmost character
///    of the string is equal to...

///    for example... for 447, first we will perform the "decrease" operation 7 times... then we'll get 440 (sum = 7)

///    then we have to perform the "swap" operation for a character then repeat the first operation... we'll get 400 (sum = 7 + 1 + 4)

///    we are going to repeat the same process until we get all zeros... (sum = 7 + 1 + 4 + 1 + 4)

///    Note that we don't have to perform the "swap" operation if a particular character is zero (0)
