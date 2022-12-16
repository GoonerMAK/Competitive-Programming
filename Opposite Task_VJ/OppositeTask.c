#include<stdio.h>
int main()
{
    int n,T,i;

    scanf("%d", &T);

    for(i=0 ; i<T ; i++)
    {
        scanf("%d", &n);

        if(n%2==0)
        {
         printf("%d %d\n", n/2, n/2);
        }

        if(n%2!=0)
        {
         printf("%d %d\n", n/2 , n/2+1);
        }


    }

   return 0;

}
