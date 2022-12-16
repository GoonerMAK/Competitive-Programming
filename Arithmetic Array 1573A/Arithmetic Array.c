#include<stdio.h>
int main()
{
    int tests;
    scanf("%d", &tests);

    while(tests--)
    {
        int size, num, sum=0;
        scanf("%d", &size);

        for(int i=0 ; i<size ; i++)
        {
            scanf("%d", &num);
            sum = sum + num;
        }

        if(sum > size)                      ///  we can just add bunch of zeros
        {
            printf("%d\n", sum-size);
        }

        else if(sum < size)                ///  add a big enough number
        {
            printf("1\n");
        }

        else                             ///  no need to add anything (sum == size)
        {
            printf("0\n");
        }

    }

    return 0;
}
