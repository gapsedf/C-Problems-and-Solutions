#include <stdio.h>
#include <stdlib.h>
/*
Void parameterless function.
(Most primitive)
*/
void count_occurence()
{
    int size;
    printf("Enter the array size: ");
    scanf("%d",&size);

    int a[size];

    printf("Enter the array values \n");
    for(int i=0;i<size;i++)
    {
        printf("Element[%d] is :",i);
        scanf("%d",&a[i]);
    }

    int targetvalue;

    printf("Which value you want to count from array? \n");
    scanf("%d",&targetvalue);

    int counter =0;

    for(int i=0;i<size;i++)
    {
        if(a[i]==targetvalue)
        {
            counter++;
        }
    }

    printf("Target [%d] is occured [%d] times.",targetvalue,counter);
}

/*
2nd type is void via parameters.
*/

void count_occurence_pr(int size, int a[],int targetvalue)
{
    int counter =0;

    for(int i=0;i<size;i++)
    {
        if(a[i]==targetvalue)
        {
            counter++;
        }
    }

    printf("Target [%d] is occured [%d] times.",targetvalue,counter);
}

/*
3rd type is via returntype and no parameters.
*/

int count_occurence_rn()
{
    int size;
    printf("Enter the array size: ");
    scanf("%d",&size);

    int a[size];

    printf("Enter the array values \n");
    for(int i=0;i<size;i++)
    {
        printf("Element[%d] is :",i);
        scanf("%d",&a[i]);
    }

    int targetvalue;

    printf("Which value you want to count from array? \n");
    scanf("%d",&targetvalue);

    int counter =0;

    for(int i=0;i<size;i++)
    {
        if(a[i]==targetvalue)
        {
            counter++;
        }
    }

    printf("Target [%d] is occured [%d] times.",targetvalue,counter);
    return counter;
}



/*
Last type is both using return and parameter.
*/

int count_occurence_rn_pr(int size, int a[], int targetvalue)
{
    int counter =0;

    for(int i=0;i<size;i++)
    {
        if(a[i]==targetvalue)
        {
            counter++;
        }
    }

    printf("Target [%d] is occured [%d] times.",targetvalue,counter);
    return counter;
}




/*
            Main Logic
For this problem we must know which value we are try to count.
So we create space for that value (targetvalue)
And we need also know the size of array.
Lets create more generalize editions via function types.
*/
int main()
{
    int a[] = {7,9,3,4,1,9,4,5,3};
    int counter = 0;
    int targetvalue = 7;

    for(int i=0;i<9;i++)
    {
        if(a[i]==targetvalue)
        {
            counter++;
        }
    }

    printf("Number of occurence of [%d] value is [%d] times.",targetvalue,counter);

    return 0;
}
