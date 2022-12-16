#include<stdio.h>
#include<math.h>

int main()
{
    int num, temp;
    long long int sum=0;

    scanf("%d", &num);
    temp = num;

    while(temp--)
    {
        sum = sum + pow(2,num);
        num--;
    }

    printf("%lld", sum );
}
