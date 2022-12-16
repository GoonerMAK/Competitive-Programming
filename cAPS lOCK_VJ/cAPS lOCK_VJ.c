#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
      char arr[100+1];
      int i, count=0, count2=0;

      scanf("%s", arr);

      int size = strlen(arr);

      for(i=0 ; i<=size ; i++)
      {
          if(arr[i]>='A' && arr[i] <= 'Z' )
          {
              count++;
          }
      }

      if(size==count)
      {
          for(i=0 ; i<size ; i++)
          {
              printf("%c", tolower(arr[i]));
          }
      }

      else if(count== (size-1) && (arr[0] >= 'a' && arr[0]<= 'z') )
      {
          printf("%c", toupper(arr[0]));
          for(i=1 ; i<size ; i++)
          {
              printf("%c", tolower(arr[i]) );
          }
      }

      else
      {
          printf("%s", arr);
      }

      return 0;
}
