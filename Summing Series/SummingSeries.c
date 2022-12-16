#include<stdio.h>
int main()
{
    int i;
    int sum=0;

    while(scanf("%d",&i))
       {
        //printf("%d\n",i);
        sum=sum+i;
        if(i==0)
          break;

       }
    printf("%d", sum);

     return 0;
}
