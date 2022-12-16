#include<stdio.h>
int main()
{
       int t,n,m,i,boxes;

       scanf("%d", &t);

       for(i=0 ; i<t ; i++)
       {
            scanf("%d %d", &n, &m);
            boxes=n*m;

            if(boxes%2==0)
            {
                printf("%d\n", boxes/2);
            }

            else if((boxes%2)!=0)
            {
                printf("%d\n", (boxes/2)+1);
            }

            else
            {
               printf("1\n");
            }
       }


       return 0;
}
