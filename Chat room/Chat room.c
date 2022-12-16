#include<stdio.h>
#include<string.h>
int main()
{
    char arr[6] = "hello";                            ///   we have to put the size 6, because of the null character
    int i, count=0;                                  ///    in that case the correct count will be 6
                                                    ///     and all the wrong counts will be from 0 to 4... but not 5
    char arr2[101];
    scanf("%s", arr2);

    for(i=0 ; i<= strlen(arr2) ; i++)
    {
        if( arr2[i]==arr[count] )
        {
            count++;
        }
    }

    //printf("%d\n", count);

    count==6 ? printf("YES") : printf("NO") ;

    return 0;
}
