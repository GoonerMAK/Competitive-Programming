#include<stdio.h>
int main()
{
    int i, count=0;
    char str[101];
    scanf("%s", str);

    int arr[26] = {0};                        /// there's 26 letters in the Alphabet

    for(i=0 ; str[i] != '\0' ; i++)
    {
        arr[ str[i] - 97 ]++;                /// the ASCII value of 'a' is 97...  that's how we are incrementing the elements of arr[26]
    }

    for(i=0 ; i<26 ; i++)
    {
        if(arr[i] >=1)                      ///  if the count is not zero that means the word had that letter at least once
        {
            count++;
        }
    }

    printf( (count%2==0) ? "CHAT WITH HER!" : "IGNORE HIM!");

    return 0;
}
