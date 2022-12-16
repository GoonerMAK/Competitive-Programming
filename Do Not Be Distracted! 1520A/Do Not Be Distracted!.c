#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int size, i=0, arr[26]={0}, count=0;
        char str[101];

        scanf("%d", &size);

        scanf("%s", str);

        for(i=0 ; i<size ; i++)
        {
            if( arr[ str[i]- 'A'] == 0)              /// arr[]==0 means that this is the first appearance of the character str[i]
            {
                arr[ str[i]- 'A' ]++;                /// Incrementing arr[] for str[i]-'A'
            }

            else if( str[i] != str[i-1] )            /// checking if str[i] and its previous character are same or not
            {                                        /// This has to be checked because arr[] is more than zero (2nd/3rd... appearance of a character)
                count++;
            }
        }

        if(count==0)
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }

    }

    return 0;
}
