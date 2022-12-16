#include<stdio.h>
int main()
{
     int i,c=0;
     char n1[1000], n2[1000], num1, num2;

     for(i=0 ; num1!='\n' ; i++)
     {
         num1=getchar();
         n1[i]=num1;
         c++;
     }

     for(i=0 ; num2!='\n' ; i++)
     {
         num2=getchar();
         n2[i]=num2;
     }

     for(i=0 ; i<c ; i++)
     {
         if( (n1[i]=='1' && n2[i]=='1') || (n1[i]=='0' && n2[i]=='0') )
         {
             printf("0");
         }

         else if( (n1[i]=='1' && n2[i]=='0') || (n1[i]=='0' && n2[i]=='1') )
         {
             printf("1");
         }
     }

     return 0;
}
