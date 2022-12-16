#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char arr[101];
    int i;

    scanf("%s", arr);

    for(i=0 ; arr[i]!= '\0' ; i++)
    {
         if( ! strchr("AEIOUYaeiouy", arr[i]) )            ///      strchr function
         {
             printf(".%c", tolower(arr[i]) );
         }
    }

    return 0;
}
