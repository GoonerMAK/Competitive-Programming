#include<stdio.h>
int main()
{
        int n,m,a,i,c=0;
        scanf("%d %d", &n, &m);

        for(i=n+1 ; i<=m ; i++)
        {
//                printf("%d %d\n", i, m);

                if((i%3)==0 || (i%5)==0 || (i%7)==0 || (i%11)==0 || (i%13)==0 || (i%17)==0 || (i%19)==0 || (i%23)==0 || (i%27)==0 || (i%29)==0 || (i%31)==0 || (i%37)==0 || (i%41)==0 || (i%43)==0 || (i%47)==0 || (i%49)==0 )

                    {
                          //printf("%d\n", i);
                          c++;
                    }


        }
        printf("%d\n", c);

        if(c==1)
        {
            printf("Yes");
        }

        else
        {
            printf("No\n");
        }

     return 0;
}
