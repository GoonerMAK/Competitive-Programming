#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n,i;
        scanf("%d", &n);
        int arr[n];

        if((n/2)%2 !=0)
        {
            printf("NO\n");
        }

        else
        {
            printf("YES\n");

            int j=0, k=-1, p=n+1;
            for(i=0 ; i < (n/2) ; i++)
            {
                j=j+2;
                arr[i]=j;
            }

            for(i= n/2 ; i< (n/2)+(n/4) ; i++)
            {
                k=k+2;
                arr[i]=k;
            }

            for(i=(n-1) ; i>= (n/2)+(n/4) ; i--)
            {
                arr[i]=p;
                p=p-2;
            }

            for(i=0 ; i<n ; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
    }

    return 0;
}







