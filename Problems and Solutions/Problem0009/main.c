#include <stdio.h>
#include <stdlib.h>
/*
1st Function is void via no parameter
*/
void fib_n()
{
    int n;
    printf("How many fib elements(n) do you want to see: ");
    scanf("%d",&n);

    while(n<3)
    {
        printf("n must be bigger than 3, enter again");
        scanf("%d",&n);
    }

    int fibonacci[n];
    fibonacci[0]=1;
    fibonacci[1]=1;


    printf("%d,%d,",fibonacci[0],fibonacci[1]);
    for(int i=2;i<n;i++)
    {
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
        printf("%d",fibonacci[i]);
        if(i!=n-1) printf(",");
        else printf("\n");
    }

}


/*
2nd Function is void via parameter
*/
void fib_n_pr(int n)
{
    int fibonacci[n];
    fibonacci[0]=1;
    fibonacci[1]=1;

    printf("%d,%d,",fibonacci[0],fibonacci[1]);
    for(int i=2;i<n;i++)
    {
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
        printf("%d",fibonacci[i]);
        if(i!=n-1) printf(",");
        else printf("\n");
    }
}

/*
3rd Function is return via no parameter
*/
int* fib_n_rn()
{
    int n;
    printf("How many fib elements(n) do you want to see: ");
    scanf("%d",&n);

    while(n<3)
    {
        printf("n must be bigger than 3, enter again");
        scanf("%d",&n);
    }

    int *fibonacci = (int *)malloc(sizeof(int)*n);
    fibonacci[0]=1;
    fibonacci[1]=1;

    printf("%d,%d,",fibonacci[0],fibonacci[1]);
    for(int i=2;i<n;i++)
    {
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
        printf("%d",fibonacci[i]);
        if(i!=n-1) printf(",");
        else printf("\n");
    }
    return fibonacci;
}

/*
4th type is return via parameter
*/

int* fib_n_rn_pr(int n)
{
    int *fibonacci = (int *)malloc(sizeof(int)*n);
    fibonacci[0]=1;
    fibonacci[1]=1;

    printf("%d,%d,",fibonacci[0],fibonacci[1]);
    for(int i=2;i<n;i++)
    {
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
        printf("%d",fibonacci[i]);
        if(i!=n-1) printf(",");
        else printf("\n");
    }
    return fibonacci;
}



/*
                Main Program Logic
First we need to know how much elements we want to print.
So first n elements lets say. Now we need space for n.
N must be bigger than 2. Because we need to use first two elements
to derive other elements from them.

Remember: Fib sequence next element rule is last two elements sum.
*/

int main()
{
    int n;

    printf("How many fib element do you want to see : ");
    scanf("%d",&n);

    while(n<3)
    {
        printf("n must be bigger than 3, enter again : ");
        scanf("%d",&n);
    }

    int fib_array[n];
    fib_array[0]=1;
    fib_array[1]=1;

    printf("%d,%d,",fib_array[0],fib_array[1]);
    for(int i=2;i<n;i++)
    {
        fib_array[i] = fib_array[i-1] + fib_array[i-2];
        printf("%d",fib_array[i]);

        if(i!=(n-1))
        {
            printf(",");
        }else
        {
            printf("\n");
        }
    }

    // For return types we need to free the dynamic memory.

    int *result = fib_n_rn_pr(10);
    for(int i=0;i<10;i++)
    {
        printf("%d ",result[i]);
    }
    free(result);

    return 0;
}
