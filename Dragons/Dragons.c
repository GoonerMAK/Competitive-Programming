#include<stdio.h>
int main()
{
     int s,n,i,d=0;
     scanf("%d%d", &s, &n);

     int x[n],y[n];

     for(i=0 ; i<n ; i++)
     {
         scanf("%d%d", &x[i], &y[i]);
     }

     for(i=0 ; i<n ; i++)
     {
             if(s>x[i] && x[i]<=10000)
             {
                  s=s+y[i];
                  d++;
                  x[i]=42168;
                  i=-1;
                  //printf("\n%d\n", s);

             }
             else
             {
                  continue;
             }

     }

     if(d==n)
     {
           printf("YES");
     }

     else
     {
           printf("NO");
     }

     return 0;
}
