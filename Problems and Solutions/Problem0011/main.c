#include <stdio.h>
#include <stdlib.h>
/*
First function type is void via no parameter.
*/
void fiboli_n()
{
    int n;
    printf("Enter the n value: ");
    scanf("%d",&n);
    while(n<1)
    {
        printf("n value must greater than 1 enter again: ");
        scanf("%d",&n);
    }

    int fiboli[4*n];
    int fibolieven[n];
    int k=0;
    fiboli[0]=1;
    fiboli[1]=1;
    fiboli[2]=1;

    for(int i=3;i<4*n;i++)
    {
        fiboli[i]=fiboli[i-1]+fiboli[i-2]+fiboli[i-3]+3;

        if(i%4==3)
        {
            fibolieven[k]=fiboli[i];
            k++;
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",fibolieven[i]);

        if(i!=n-1)
        {
            printf(",");
        }else
        {
            printf("\n");
        }
    }
}

/*
2nd function type is void via parameter.
*/

void fiboli_n_pr(int n)
{
    int fiboli[4*n];
    int fibolieven[n];
    int k=0;
    fiboli[0]=1;
    fiboli[1]=1;
    fiboli[2]=1;

    for(int i=3;i<4*n;i++)
    {
        fiboli[i]=fiboli[i-1]+fiboli[i-2]+fiboli[i-3]+3;

        if(i%4==3)
        {
            fibolieven[k]=fiboli[i];
            k++;
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",fibolieven[i]);

        if(i!=n-1)
        {
            printf(",");
        }else
        {
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
    while(n<1)
    {
        printf("n value must greater than 1 enter again: ");
        scanf("%d",&n);
    }

    int fiboli[4*n];
    int* fibolieven = (int*)malloc(sizeof(int)*n);
    int k=0;
    fiboli[0]=1;
    fiboli[1]=1;
    fiboli[2]=1;

    for(int i=3;i<4*n;i++)
    {
        fiboli[i]=fiboli[i-1]+fiboli[i-2]+fiboli[i-3]+3;

        if(i%4==3)
        {
            fibolieven[k]=fiboli[i];
            k++;
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",fibolieven[i]);

        if(i!=n-1)
        {
            printf(",");
        }else
        {
            printf("\n");
        }
    }

    return fibolieven;
}

/*
Last type is return via parameter
*/

int* fiboli_n_rn_pr(int n)
{
    int fiboli[4*n];
    int* fibolieven = (int*)malloc(sizeof(int)*n);
    int k=0;
    fiboli[0]=1;
    fiboli[1]=1;
    fiboli[2]=1;

    for(int i=3;i<4*n;i++)
    {
        fiboli[i]=fiboli[i-1]+fiboli[i-2]+fiboli[i-3]+3;

        if(i%4==3)
        {
            fibolieven[k]=fiboli[i];
            k++;
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",fibolieven[i]);

        if(i!=n-1)
        {
            printf(",");
        }else
        {
            printf("\n");
        }
    }

    return fibolieven;
}






/*
                    Main Program Logic
We need to find first n even fiboli numbers.
Which means every iteration modulo 4==3 numbers.
According to that we can create. Notice that return types we must use malloc.

*/
int main()
{
    int n;
    printf("Enter the n value: ");
    scanf("%d",&n);

    while(n<1)
    {
        printf("n value must greater than 1");
        scanf("%d",&n);
    }

    int fiboli[4*n];
    int fibolieven[n];
    int k=0;
    fiboli[0]=1;
    fiboli[1]=1;
    fiboli[2]=1;

    for(int i=3;i<4*n;i++)
    {
        fiboli[i]=fiboli[i-1]+fiboli[i-2]+fiboli[i-3]+3;

        if(i%4==3)
        {
            fibolieven[k]= fiboli[i];
            k++;
        }

    }

    for(int i=0;i<n;i++)
    {
        printf("%d",fibolieven[i]);

        if(i!=n-1)
        {
            printf(",");
        }else
        {
            printf("\n");
        }
    }



    // We must free the memory allocation. When use return types.
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
