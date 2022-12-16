#include<stdio.h>
int main()
{
       long long int n,back=0,r;
       int t,i;

       scanf("%d", &t);

       for(i=0 ; i<t ; i++)
       {
             scanf("%lld", &n);

             while(n!=0)
             {
                   r=(n%10);
                   back=(back*10)+r;
                   n=n/10;
             }
             printf("%lld\n", back);
             back=0;
       }

       return 0;
}
