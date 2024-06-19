#include <stdio.h>
#include <stdlib.h>
/*
First type is void and parameterless. Lets use this.
*/
void sum_elements()
{
    int size=0;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int array1[size];

    for(int i=0;i<size;i++)
    {
        printf("Element[%d] = ");
        scanf("%d",&array1[i]);
    }

    int sum = 0;

    for(int i=0;i<size;i++)
    {
        sum = sum + array1[i];
    }

    printf("The sum of the array is %d",sum);
}

/*
2nd type is void via parameters.
*/
void sum_elements_pr(int size, int array1[])
{
    int sum=0;

    for(int i=0;i<size;i++)
    {
        sum = sum + array1[i];
    }

    printf("The sum of the array is %d",sum);
}

/*
3rd type is return and parameterless.
*/

int sum_elements_rn()
{
    int size=0;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int array1[size];

    for(int i=0;i<size;i++)
    {
        printf("Element[%d] = ");
        scanf("%d",&array1[i]);
    }

    int sum = 0;

    for(int i=0;i<size;i++)
    {
        sum = sum + array1[i];
    }

    printf("The sum of the array is %d",sum);
    return sum;
}

/*
4th type is return via parameters.
*/

int sum_elements_rn_pr(int size, int array1[])
{
    int sum = 0;

    for(int i=0;i<size;i++)
    {
        sum = sum + array1[i];
    }

    printf("The sum of the array is %d",sum);
    return sum;
}





/*
            Main Program Logic
Iterate through array. And in each iteration add the value to the sum variable.
After the Iteration we have the sum variable.
*/

int main()
{
    int array1[9]={1,2,3,4,5,6,7,8,9};
    int size = 9;
    int sum = 0;

    for(int i=0;i<size;i++)
    {
        sum = sum + array1[i];
    }

    printf("The sum is : %d",sum);


    return 0;
}
