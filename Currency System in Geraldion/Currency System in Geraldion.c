#include<stdio.h>
int main()
{
    int notes,value;
    scanf("%d", &notes);

    while(notes--)
    {
        scanf("%d", &value);

        if(value==1)
        {
            printf("-1");
            return 0;
        }
    }

    printf("1");
    return 0;
}






//#include<stdio.h>
//int main()
//{
//     int notes,i;
//     scanf("%d", &notes);
//
//     int arr[notes];
//
//     for(i=0 ; i<notes ; i++)
//     {
//            scanf("%d", &arr[i]);      /// reading value of notes
//     }
//
//     for(i=0 ; i<notes ; i++)
//     {
//            if(arr[i]==1)
//            {
//               printf("-1");
//               return 0;
//            }
//     }
//
//     printf("1");
//     return 0;
//}
