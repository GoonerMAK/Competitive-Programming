#include<stdio.h>
int main()
{
         int n,k,i,s,s1=0,p=0;
         scanf("%d%d", &n, &k);

         s=240-k;

         for(i=1 ; i<=n ; i++)
         {
            s1=(i*5)+s1;
            if(s1<=s)
            {
               p++;
            }
         }
         printf("%d", p);
         return 0;
}
