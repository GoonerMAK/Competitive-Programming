#include<stdio.h>
int main()
{
    char arr[201];

    scanf("%s", arr);

    for(int i=0 ; arr[i] != '\0' ; i++)
    {
        if( arr[i] == '.' )
        {
            printf("%d", 0);
        }

        else if( arr[i] == '-' )
        {
            if(arr[i+1] == '-' )
            {
                printf("%d", 2);
                i++;
            }

            else
            {
                printf("%d", 1);
                i++;
            }
        }
    }

    return 0;
}
