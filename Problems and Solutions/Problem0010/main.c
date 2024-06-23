#include <stdio.h>
#include <stdlib.h>
/*
1st Type is void via no parameter
*/
void fiboli_n()
{
    int n;
    printf("Enter the n value: ");
    scanf("%d",&n);
    while(n<4)
    {
        printf("n must be bigger than 4, enter again");
        scanf("%d",&n);
    }

    int fiboli[n];
    fiboli[0]=1;
    fiboli[1]=1;
    fiboli[2]=1;

    printf("%d,%d,%d,",fiboli[0],fiboli[1],fiboli[2]);

    for(int i=3;i<n;i++)
    {
        fiboli[i]=fiboli[i-1]+fiboli[i-2]+fiboli[i-3]+3;
        printf("%d",fiboli[i]);
        if(i!=n-1)
        {
            printf(",");
        }else{
            printf("\n");
        }
    }

}

/*
2nd type is void via parameter
*/

void fiboli_n_pr(int n)
{
    int fiboli[n];
    fiboli[0]=1;
    fiboli[1]=1;
    fiboli[2]=1;

    printf("%d,%d,%d,",fiboli[0],fiboli[1],fiboli[2]);

    for(int i=3;i<n;i++)
    {
        fiboli[i]=fiboli[i-1]+fiboli[i-2]+fiboli[i-3]+3;
        printf("%d",fiboli[i]);
        if(i!=n-1)
        {
            printf(",");
        }else{
            printf("\n");
        }
    }
}

/*
3rd type is return via no parameter
*/
int* fiboli_n_rn()
{
    int n;
    printf("Enter the n value: ");
    scanf("%d",&n);
    while(n<4)
    {
        printf("n must be bigger than 4, enter again");
        scanf("%d",&n);
    }

    int* fiboli = (int*)malloc(sizeof(int)*n);
    fiboli[0]=1;
    fiboli[1]=1;
    fiboli[2]=1;

    printf("%d,%d,%d,",fiboli[0],fiboli[1],fiboli[2]);

    for(int i=3;i<n;i++)
    {
        fiboli[i]=fiboli[i-1]+fiboli[i-2]+fiboli[i-3]+3;
        printf("%d",fiboli[i]);
        if(i!=n-1)
        {
            printf(",");
        }else{
            printf("\n");
        }
    }
    return fiboli;
}

/*
4th type is return via parameter
*/
int* fiboli_n_rn_pr(int n)
{
    int* fiboli = (int*)malloc(sizeof(int)*n);
    fiboli[0]=1;
    fiboli[1]=1;
    fiboli[2]=1;

    printf("%d,%d,%d,",fiboli[0],fiboli[1],fiboli[2]);

    for(int i=3;i<n;i++)
    {
        fiboli[i]=fiboli[i-1]+fiboli[i-2]+fiboli[i-3]+3;
        printf("%d",fiboli[i]);
        if(i!=n-1)
        {
            printf(",");
        }else{
            printf("\n");
        }
    }
    return fiboli;
}

/*
                Program Main Logic
Lets assume First three elements sum and plus 3 is 4th element.
We call this formula Fiboli numbers.
Element[3] = Element[0]+Element[1]+Element[2] + 3;
Element[0] = 1
Element[1] = 1
Element[2] = 1
Element[3] = 6
*/
int main()
{
    int n;
    printf("Enter the number of elements in new fib formula: ");
    scanf("%d",&n);
    while(n<4)
    {
        printf("Element must be greater than 4 enter again: ");
        scanf("%d",&n);
    }
    int fiboli[n];
    fiboli[0] = 1;
    fiboli[1] = 1;
    fiboli[2] = 1;
    printf("%d,%d,%d,",fiboli[0],fiboli[1],fiboli[2]);

    for(int i=3;i<n;i++)
    {
        fiboli[i]= fiboli[i-1]+fiboli[i-2]+fiboli[i-3]+3;
        printf("%d",fiboli[i]);
        if(i!=n-1)
        {
            printf(",");
        }else
        {
            printf("\n");
        }
    }


    // If we use the return type we must free them after allocation.
    int* result = fiboli_n_rn_pr(10);
    for(int i=0;i<10;i++)
    {
        printf("%d",result[i]);
        if(i!=9)
        {
            printf(",");
        }else
        {
            printf("\n");
        }
    }
    free(result);

    return 0;
}
