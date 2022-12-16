#include<stdio.h>
int main()
{
    int arr1[26]= {0};
    char arr2[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    char ch;
    int n,j,i;

    scanf("%d", &n);

    for(j=0 ; j<n ; j++)
    {
           for(i=0 ; ch != '\n' ; i++)
           {
                    ch=getchar();
                    arr1[ch - 'A']++;
           }
    }

    int big=arr1[0];

    for(i=0 ; i<26 ; i++)
    {
           if(arr1[i] >= big)
           {
                  big=arr1[i];
           }
    }

    for(i=0 ; i<26 ; i++)
    {
            if(arr1[i] >= big)
            {
                    printf("%c", arr2[i]);
            }
    }

    return 0;
}
