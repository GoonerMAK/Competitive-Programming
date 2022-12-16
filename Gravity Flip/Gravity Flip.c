#include<stdio.h>
int main()
{
    int columns,i,min,count=0;
    int d=101;
    scanf("%d", &columns);

    int arr[columns];

    for(i=0 ; i<columns ; i++)
    {
        scanf("%d", &arr[i]);
        count++;
    }

    while(columns--)
    {
        min=arr[0];
//        printf("\n min is %d\n", min);
//        printf("\n d is %d\n", d);

        for(i=0 ; i<count ; i++)
        {
              if((arr[i]<=min))
              {
                    min=arr[i];
                    d=i;
              }
        }
        arr[d]=101;
//        printf("\n d is %d\n", d);
        printf("%d ", min);

    }
    return 0;
}
