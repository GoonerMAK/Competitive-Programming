#include<stdio.h>
int main()
{
    int size, tests, i;
    scanf("%d", &tests);

    while(tests--)
    {
        scanf("%d", &size);

        int numbers[size], sum=0, count=0;

        for(i=0 ; i<size ; i++)
        {
            scanf("%d", &numbers[i]);

            (numbers[i] == 0) ? (count++) : ( sum = sum + numbers[i] ) ;
        }

        sum = sum + count;

        printf("%d\n", sum == 0 ? ++count : count);
    }
    return 0;
}


///   Whenever there's a zero... we have to perform the mentioned operation...
///   After that we have to add 1 to the answer if the sum of the array is also zero...
