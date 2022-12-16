#include<stdio.h>
int main()
{
    int sizeA, sizeB, maxA=0, maxB=0;
    scanf("%d", &sizeA);

    int arrA[sizeA];
    for(int i=0 ; i<sizeA ; i++)
    {
        scanf("%d", &arrA[i]);

        if(arrA[i] > maxA)
        {
            maxA = arrA[i];                  ///  maxA = max of arrA
        }
    }

    scanf("%d", &sizeB);

    int arrB[sizeB];
    for(int i=0 ; i<sizeB ; i++)
    {
        scanf("%d", &arrB[i]);

        if(arrB[i] > maxB)
        {
            maxB = arrB[i];                 ///   maxB = max of arrB
        }
    }

    printf("%d %d", maxA, maxB);            ///   (maxA + maxB) can't possibly belong to any of the arrays

    return 0;
}
