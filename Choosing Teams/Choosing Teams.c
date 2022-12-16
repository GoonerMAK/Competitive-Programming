#include<stdio.h>
int main()
{
    int num_of_students, participations, i;
    scanf("%d %d", &num_of_students, &participations);

    int student, count=0;

    for(i=0 ; i<num_of_students ; i++)
    {
        scanf("%d", &student);

        if( (student+participations) <= 5)
        {
            count++;
        }
    }

    printf("%d", count/3);
    return 0;
}
