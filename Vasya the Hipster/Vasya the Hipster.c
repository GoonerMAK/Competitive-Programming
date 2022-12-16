#include<stdio.h>
int main()
{
     int a,b,s1,s2;

     scanf("%d %d", &a, &b);

     if(a>b)
     {
       s1=b;
       s2=(a-b)/2;
     }

     else if(b>a)
     {
       s1=a;
       s2=(b-a)/2;
     }

     else
     {
       s1=a;
       s2=0;
     }

     printf("%d %d", s1, s2);

     return 0;

}
