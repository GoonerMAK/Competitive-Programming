#include<stdio.h>
int main()
{
    int tests, i;
    scanf("%d", &tests);

    while(tests--)
    {
        int n, arr[26] = {0};      /// 26 letters
        char str[1001];
        scanf("%d", &n);

        for(int j=0 ; j<n ; j++)
        {
            scanf("%s", str);
            for(i=0 ; str[i]!='\0' ; i++)
            {
                arr[ str[i] - 'a' ]++;       /// if str[i]=a then, arr['a'-'a']++ or arr[0]++
            }
        }

        for(i=0 ; i<26 ; i++)
        {
            if( arr[i] % n != 0 )          /// every string needs to have the same amount of letters to be equal (here n is the number of lines)
            {                             ///  if every letter is divisible (without having remainder) by n then we can say that every string is equal (otherwise no)
                printf("NO\n");
                break;
            }
        }

        if(i == 26)
        {
            printf("YES\n");
        }

    }

    return 0;
}
