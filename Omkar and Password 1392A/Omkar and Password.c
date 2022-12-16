#include<stdio.h>
int main()
{
    int size, tests, i;

    scanf("%d", &tests);

    while(tests--)
    {
        scanf("%d", &size);

        int num[size];
        int flag=0;

        for(i=0 ; i<size ; i++)
        {
            scanf("%d", &num[i]);
        }

        for(i=0 ; i<(size-1) ; i++)
        {
            if( num[i] != num[i+1] )              ///  if any of the element of an Array is different from another...
            {                                    ///   then we will be able to achieve the smallest length possible for a password (which is 1)
                flag = 1;
                printf("%d\n", 1);
                break;
            }
        }

        if(flag==0)
        {
            printf("%d\n", size);
        }

    }

    return 0;
}


///  The password length will be the same as the size of the array if and only if
///  all the elements of the array are the same....

///  otherwise we can perform the operation where we replace one number of an array
///  with the addition of two adjacent numbers...

