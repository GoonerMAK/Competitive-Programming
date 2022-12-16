#include<stdio.h>
int main()
{
       int t,w,h,n,i,sheets=1;

       scanf("%d", &t);


       for(i=0 ; i<t ; i++)
       {
             scanf("%d %d %d", &w, &h, &n);

             while(w%2==0)
             {
                  w=w/2;
                  sheets=sheets*2;
             }

             while(h%2==0)
             {
                  h=h/2;
                  sheets=sheets*2;
             }


//          printf("%d\n", sheets);

            if(sheets>=n)
            {
                printf("YES\n");
            }

            if(sheets<n)
            {
                printf("NO\n");
            }

            sheets=1;

       }


      return 0;
}
