#include <stdio.h>
#include <stdlib.h>
/*
1st type is void parameterless. Let's try that. (Most primitive)
*/
void reverse()
{
int size;
printf("Enter the size of array: ");
scanf("%d",&size);

int a[size];

printf("Enter the array values to the array \n");
for(int i=0;i<size;i++)
{
    printf("Element [%d] is :",i);
    scanf("%d",&a[i]);
}

int temp =0;

for(int i=0;i<size/2;i++)
{
    temp = a[i];
    a[i] = a[size-i-1];
    a[size-i-1] = temp;
}

printf("Reversed array is : ");

for(int i=0;i<size;i++)
{
    printf("%d ",a[i]);
}

}

/*
2nd type is void via parameter.
*/
void reverse_pr(int size, int a[])
{
int temp =0;

for(int i=0;i<size/2;i++)
{
    temp = a[i];
    a[i] = a[size-i-1];
    a[size-i-1] = temp;
}

printf("Reversed array is : ");

for(int i=0;i<size;i++)
{
    printf("%d ",a[i]);
}

}

/*
3rd type is return type and parameterless. We must use dynamically memory allocation.
*/
int* reverse_rn()
{
int size;
printf("Enter the size of array: ");
scanf("%d",&size);

int *a = malloc(sizeof(int)*size);

printf("Enter the array values to the array \n");
for(int i=0;i<size;i++)
{
    printf("Element [%d] is :",i);
    scanf("%d",&a[i]);
}

int temp =0;

for(int i=0;i<size/2;i++)
{
    temp = a[i];
    a[i] = a[size-i-1];
    a[size-i-1] = temp;
}

printf("Reversed array is : ");

for(int i=0;i<size;i++)
{
    printf("%d ",a[i]);
}

return a;
}


/*
4th type is return type and parameter. We must use dynamically memory allocation.
*/
int* reverse_rn_pr(int size,int temp)
{
int *a = malloc(sizeof(int)*size);

printf("Enter the array values to the array \n");
for(int i=0;i<size;i++)
{
    printf("Element [%d] is :",i);
    scanf("%d",&a[i]);
}

for(int i=0;i<size/2;i++)
{
    temp = a[i];
    a[i] = a[size-i-1];
    a[size-i-1] = temp;
}

printf("Reversed array is : ");



for(int i=0;i<size;i++)
{
    printf("%d ",a[i]);
}

return a;
}




/*
                Main Logic
We need to check the half of indexes. Because each half is reversed each other.
So we iterate to the size/2.
We create a temp value. Because of the swap reasons. Without it we can not protect both values.

*/
int main()
{

    int a[] = {1,2,3,4,7,8,9,12,4};
    int size = 9;
    int temp = 0;

    for(int i=0;i<size/2;i++)
    {
        temp = a[i];
        a[i] = a[size-i-1];
        a[size-i-1]=temp;
    }

    printf("Reversed array is:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n\n\n");

    // For return type questions we need free the memory from function.
    int *result = reverse_rn();

    free(result);


    return 0;
}
