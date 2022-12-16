#include<stdio.h>
void HighFrequency()
{
    int arr[26]= {0};
    char arr2[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    char ch;
    int c=0,i;

    for(i=0 ; ch!='\n' ; i++)
    {
        ch=getchar();
        arr[ch-'a']++;
        c++;
    }

    for(i=0 ; i<26 ; i++)
    {
        if(arr[i]>0)
        {
            printf("%c=%d\n", arr2[i], arr[i]);
        }
        else
        {
            continue;
        }
    }
    return;
}

int main()
{
    HighFrequency();
    return 0;
}
