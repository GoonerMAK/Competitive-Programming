///      Storing selective positions using an Array     ///

#include<stdio.h>
int main()
{
    int i, n, value, count1=0, count2=0, count3=0, teams;
    scanf("%d", &n);

    int arr1[5000], arr2[5000], arr3[5000];

    for(i=1 ; i<=n ; i++)                      ///  starting from i = 1
    {
        scanf("%d", &value);

        if(value == 1)
        {
            count1++;                       /// increasing the count of 1
            arr1[count1] = i;              ///  storing the position (i) into an array (in this case we're storing the positions of all the 1's in an array)
        }

        else if(value == 2)
        {
            count2++;                      /// increasing the count of 2
            arr2[count2] = i;             ///  storing the positions of all the 2's in an array
        }

        else
        {
            count3++;
            arr3[count3] = i;           ///  storing the positions of all the 3's in an array
        }

    }

    teams = ( count1<count2 && count1<count3 ) ? count1 : ( count2<count3 ? count2 : count3 );    /// Figuring out the smallest count... which will decide the number of possible teams

    printf("%d\n", teams);

    for(i=1 ; i<=teams ; i++)
    {
        printf("%d %d %d\n", arr1[i], arr2[i], arr3[i]);            ///  Printing out the positions of 1, 2 and 3 through arrays
    }

    return 0;
}
