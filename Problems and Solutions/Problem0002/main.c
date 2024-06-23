#include <stdio.h>
#include <stdlib.h>

/*
Most primitive function is return type void and no parameters function.
We start with that.
*/
void maxfinder()
{
    int size;
    printf("Enter the array size: ");
    scanf("%d",&size);

    int a[size];

    printf("Assign the values to the array\n");
    for(int i=0;i<size;i++)
    {
        printf("Element[%d] :",i);
        scanf("%d",&a[i]);
    }

    int max = a[0];

    for(int i=1;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    printf("Max value is : ",max);
}

/*
2nd type is void with parameters.
*/

void maxfinder_pr(int size, int a[])
{
    int max = a[0];

    for(int i=1;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    printf("Max value is : ",max);
}


/*
3rd type is return type and no parameter.
*/
int maxfinder_rn()
{
    int size;
    printf("Enter the array size: ");
    scanf("%d",&size);

    int a[size];

    printf("Assign the values to the array\n");
    for(int i=0;i<size;i++)
    {
        printf("Element[%d] :",i);
        scanf("%d",&a[i]);
    }

    int max = a[0];

    for(int i=1;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    printf("Max value is : ",max);

    return max;
}

/*
Last type has both has return type and parameter.
*/

void maxfinder_pr_rn(int size, int a[])
{
    int max = a[0];

    for(int i=1;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    printf("Max value is : ",max);
}


/*
                    MAIN PROGRAM LOGIC
This problems logic is similar to the first problem.
We have some data in our array. And assign a value to the max value.
It's like assuming its max. Than compare this value with all other values.
*/

int main()
{

int a[]={1,2,10,5,77,3,4,5};

int max = a[0];

for(int i=1;i<8;i++)
{
    if(a[i]>max)
    {
        max = a[i];
    }
}

printf("Max value is: %d",max);

    return 0;
}
