#include <stdio.h>
#include <stdlib.h>
/*
First type function is via return type is void and no parameter.
This is the most primitive function. Because of that we start with that.
*/
void minfinder()
{
int size;
printf("Enter the size value: ");
scanf("%d",&size);

int array1[size];

printf("Assign the array elements\n");
for(int i=0;i<size;i++)
{
    printf("Element : [%d]",i);
    scanf("%d",&array1[i]);
}

printf("Min value is calculated now\n");
int min = array1[0];

for(int i=1;i<size;i++)
{
    if(array1[i]<min)
    {
        min = array1[i];
    }
}

printf("Min value is : %d",min);
}

/*
Second type of function is return type void but have parameters.
Notice that we did not create variables size and a[] in function.
They are coming from main function.
*/
void minfinder_pr(int size, int a[])
{
int min = a[0];

for(int i=1;i<size;i++)
{
    if(a[i]<min)
    {
        min = a[i];
    }
}

printf("Min value is : %d",min);
}

/*
3rd type is via return type and no parameter.
This is still primitive but at least we can now bring the output to our main function.
*/
int minfinder_rn()
{
int size;
printf("Enter the size value: ");
scanf("%d",&size);

int array1[size];

printf("Assign the array elements\n");
for(int i=0;i<size;i++)
{
    printf("Element : [%d]",i);
    scanf("%d",&array1[i]);
}

printf("Min value is calculated now\n");
int min = array1[0];

for(int i=1;i<size;i++)
{
    if(array1[i]<min)
    {
        min = array1[i];
    }
}

printf("Min value is : %d",min);

return min;
}

/*
This is the most modern function.
You can use both return and parameter.
It's means you can use main function and then send output to main again.
*/
int minfinder_rn_pr(int size, int a[])
{
int min = a[0];

for(int i=1;i<size;i++)
{
    if(a[i]<min)
    {
        min = a[i];
    }
}

printf("Min value is : %d",min);

return min;
}


int main()
{
    /*
    What is the main logic of this program?
    It's literally assume that you have an array and you know its size.
    Then you assign first index to a variable called min.
    According to that variable's value you compare it with all elements.
    And if there exist smaller number exist which means new min found.
    But notice that this algorithm is not good.
    We must create a function for it can be solve minimum problem for any array.
    */
    int array1[]={9,7,6,5,1,-9,4,3};

    int min = array1[0];

    for(int i=1;i<8;i++)
    {
        if(array1[i]<min)
        {
            min = array1[i];
        }
    }

    printf("Min value is: %d",min);

    return 0;
}
