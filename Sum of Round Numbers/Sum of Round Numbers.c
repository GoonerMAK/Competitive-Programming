#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,r,count=0,temp,i,p;

    scanf("%d", &t);

 while(t--)
 {
         scanf("%d", &n);
         temp=n;
    while(temp>0)
    {
        r=temp%10;
        if(r!=0)
        {
            count++;
        }
        temp=temp/10;
    }
    printf("%d\n", count);
    count=0;

    for(i=1 ; n>0 ; i++)
    {
        r=n%10;

        if(i==1 && r!=0)
        {
            printf("%d ", r*i);
        }

        else if(r!=0)
        {
            p=pow(10,i-1);
            printf("%d ", r*p);
        }
        n=n/10;
    }
    printf("\n");
 }


    return 0;
}
