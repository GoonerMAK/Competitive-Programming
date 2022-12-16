#include<stdio.h>
int main()
{
        int n,i,m,c,s1=0,s2=0;

        scanf("%d", &n);

        for(i=0 ; i<n ; i++)
        {
               scanf("%d %d", &m, &c);

               if(m>c)
               {
                     s1++;
               }

               else if(c>m)
               {
                     s2++;
               }

        }

        if(s1>s2)
        {
                printf("Mishka");
        }

        else if(s2>s1)
        {
                printf("Chris");
        }

        else
        {
                printf("Friendship is magic!^^");
        }

        return 0;
}
