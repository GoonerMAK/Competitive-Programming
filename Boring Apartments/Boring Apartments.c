#include<stdio.h>
int main()
{
     int t,i,n,temp,r,digit=0,sum,d1=0;
     scanf("%d", &t);

     for(i=0 ; i<t ; i++)
     {
          scanf("%d", &n);
          r=n%10;

          while(n!=0)
          {
                n=n/10;
                digit++;
                d1=d1+digit;
          }

          sum=(10*(r-1))+d1;

          printf("%d\n", sum);
          digit=0;
          sum=0;
          d1=0;
     }

     return 0;
}



//#include<stdio.h>
//int main()
//{
//     int a[0]=1;
//     while(5--)
//     {
//     printf("%d\n",a[5]);
//     ++a[0];
//     }
//
//}









