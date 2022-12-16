#include<stdio.h>
int main()
{
    int n,pet,vas,ton;
    int count=0,sum=0;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%d %d %d", &pet, &vas, &ton);
        if (pet==1)
            count++;
        if(vas==1)
            count++;
        if(ton==1)
            count++;
        if (count>=2)

            sum++;
        count=0;
    }

    printf("%d",sum);

    return 0;
}
