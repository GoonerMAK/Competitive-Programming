#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d", &n);
    long long int Array[n],temp;

    for(i=0 ; i<n ; i++)
    {
        scanf("%lld", &Array[i]);
    }

    for(i=0 ; i<n ; i++)
    {
        for(j=i+1 ; j<n ; j++)
        {
            if(Array[i] > Array[j])
            {
                temp=Array[i];
                Array[i]=Array[j];
                Array[j]=temp;
            }
        }

        if(i>=2)
        {
                if( (Array[(i-1)] + Array[(i-2)]) > Array[i] )
                {
                      printf("YES");
                      return 0;
                }
        }

    }

//    i=n-1;
//    for( ; i>=2 ; i--)
//    {
//
//        printf("%d %d %d\n", Array[i-1], Array[i-2], Array[i]);
//        if( (Array[(i-1)] + Array[(i-2)]) > Array[i] )
//        {
//            printf("YES");
//            return 0;
//        }
//    }

    printf("NO");
    return 0;
}
