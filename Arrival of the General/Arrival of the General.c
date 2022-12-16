#include<stdio.h>
int main()
{
    int n,a,i,big=0,small=101;
    int big_i,small_i;
    int sum;

    scanf("%d", &n);

    for(i=1 ; i<=n ; i++)
    {
        scanf("%d", &a);

        if(a>big)
        {
            big=a;
            big_i=i;
        }
        if(a<=small)
        {
            small=a;
            small_i=i;
        }

    }

     if(big_i > small_i)
     {
         sum=((big_i-1)+(n-small_i)-1);
     }

     if(small_i > big_i)
     {
         sum=(big_i-1)+(n-small_i);
     }

     printf("%d", sum);

     return 0;
}
