#include <stdio.h>
#include <stdlib.h>
/*
1st type is void via no parameter.
*/
void avg_finder()
{
    int size=0;
    double avg = 0;
    int sum = 0;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    int array1[size];

    printf("Enter the array values \n");
    for(int i=0;i<size;i++)
    {
        printf("Element[%d]: ",i);
        scanf("%d",&array1[i]);
    }

    for(int i=0;i<size;i++)
    {
        sum = sum + array1[i];
    }

    avg = (double)sum / size;


    printf("Avg of array is : %f",avg);
}


/*
2nd type is void via parameters.
*/

void avg_finder_pr(int size,int array1[])
{
    double avg = 0;
    int sum = 0;

    for(int i=0;i<size;i++)
    {
        sum = sum + array1[i];
    }

    avg = (double)sum / size;


    printf("Avg of array is : %f",avg);
}

/*
3rd type is return and parameterless
*/

double avg_finder_rn()
{
    int size=0;
    double avg = 0;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    int array1[size];
    int sum = 0;

    printf("Enter the array values \n");
    for(int i=0;i<size;i++)
    {
        printf("Element[%d]: ",i);
        scanf("%d",&array1[i]);
    }

    for(int i=0;i<size;i++)
    {
        sum = sum + array1[i];
    }

    avg = (double)sum / size;


    printf("Avg of array is : %f",avg);
    return avg;
}

/*
Last type is return and parameter.
*/

double avg_finder_rn_pr(int array1[],int size)
{
    double avg = 0;
    int sum = 0;

    for(int i=0;i<size;i++)
    {
        sum = sum + array1[i];
    }

    avg = (double)sum / size;


    printf("Avg of array is : %f",avg);
    return avg;
}


/*
                Main Program Logic
Iterate through array and store the sum value in variable.
Than divide this sum value with size of array.
Notice that we divide this via convert it to double.
If we don't do this we lose some values after the point.
like 3/2 = 1.5 actually but we need to do this double.
If we do this via int formula 3/2 = 1 it is rounding to zero.
*/


int main()
{
    int array1[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int sum = 0;

    for(int i=0;i<size;i++)
    {
        sum = sum + array1[i];
    }

    double avg=0;

    avg = (double)sum / size;

    printf("Avg of array is %f",avg);

    return 0;
}
