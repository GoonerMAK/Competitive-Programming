#include<stdio.h>
int main()
{
    int n, flag=0;
    scanf("%d", &n);

    char arr[n][6];

    for(int i=0 ; i<n ; i++)
    {
        scanf("%s[^\n]", arr[i]);              /// "%s[^\n]" = Disregards every new line
    }

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<5 ; j++)
        {
            if(arr[i][j]==arr[i][j+1] && arr[i][j]=='O')
            {
                arr[i][j]   = '+';
                arr[i][j+1] = '+';
                flag = 1;
                break;
            }
        }

        if(flag)
        {
            break;
        }
    }

    if(flag)
    {
        puts("YES");
        for(int i=0 ; i<n ; i++)
        {
            printf("%s\n", arr[i]);                 /// no need to write arr[i][j] (here, we can just use one loop)
        }
    }

    else
    {
        puts("NO");
    }

    return 0;
}
