#include<stdio.h>
int main()
{
        int i,Y,W;
        int big=0,roll=6;

        scanf("%d %d", &Y, &W);

        if(Y>big)
        {
              big=Y;
        }
        if(W>=Y)
        {
              big=W;
        }
//        printf("%d", big);
        big=7-big;

        for(i=2 ; i<=6 ; i++)
        {
                 if(big%i==0 && roll%i==0)
                 {
                     big=(big/i);
                     roll=(roll/i);
                 }
        }

        printf("%d/%d", big, roll);

        return 0;

}
