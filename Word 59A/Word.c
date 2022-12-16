#include<stdio.h>
#include<ctype.h>
int main()
{
    char word[101];
    int small=0, capital=0;
    scanf("%s", word);

    for(int i=0 ; word[i] != '\0' ; i++ )
    {
        if(word[i] >= 'A' && word[i] <= 'Z')            /// if it's capital...
        {
            capital++;
        }

        else
        {
            small++;
        }
    }

    if(capital>small)
    {
        for(int i=0 ; word[i] != '\0' ; i++ )
        {
            printf("%c", toupper(word[i]) );              ///  Capital word
        }
    }

    else
    {
        for(int i=0 ; word[i] != '\0' ; i++ )
        {
            printf("%c", tolower(word[i]) );
        }
    }

    return 0;
}
