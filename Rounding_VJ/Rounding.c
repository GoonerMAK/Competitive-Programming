#include<stdio.h>
int main()
{
    long long int n;

    scanf("%lld", &n);

    if(n>=0 && n<=5)
    {
     printf("%d", 0);
    }

    if(n>5 && n<10)
    {
     printf("%d", 10);
    }

    if(n>=10 && n%10==0)
    {
     printf("%lld", n);
    }

    if(n>10 && (n%10)>5)
    {
     printf("%lld", n+(10-(n%10)));
    }

    if(n>10 && (n%10)<=5 && (n%10)!=0)
    {
     printf("%lld",n-(n%10));
    }



  return 0;


}
