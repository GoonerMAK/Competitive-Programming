#include<stdio.h>
int main()
{
    int green, purple, black, andrew, dmitry, michal;

    scanf("%d %d %d", &andrew, &dmitry, &michal);
    scanf("%d %d %d", &green, &purple, &black);

    if( (green>=andrew) && ( (green+purple-andrew)>=dmitry) && ( (green+purple+black-andrew-dmitry)>=michal) )     ///  Three conditions have to be true (basic math)
    {
        printf("YES");
    }

    else
    {
        printf("NO");
    }

    return 0;
}
