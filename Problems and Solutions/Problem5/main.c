#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/*
Lets create first function type which is Void and Parameterless. (Most primitive one.)
*/
void is_palindrome()
{
int size=0;
printf("Enter the size of string");
scanf("%d",&size);
char string1[size+1];
printf("Enter the string");
gets(string1);

int length = strlen(string1);
int middle = length/2;
int counter = 0;

for(int i=0;i<middle;i++)
{
    if(string1[i]!=string1[length-i-1])
    {
        printf("%s \n It is not a palindrome.",string1);
        break;
    }else
    {
    counter++;
    }
}
if(counter == middle)
{
    printf("%s \n Is a palindrome.",string1);
}

}

/*
2nd type is void type with parameters
*/
void is_palindrome_pr(char string1[])
{
int length = strlen(string1);
int middle = length/2;
int counter = 0;

for(int i=0;i<middle;i++)
{
    if(string1[i]!=string1[length-i-1])
    {
        printf("%s \n It is not a palindrome.",string1);
        break;
    }else
    {
    counter++;
    }
}
if(counter == middle)
{
    printf("%s \n Is a palindrome.",string1);
}

}


/*
3rd type is via return function and no parameter. We can use <stdbool.h> library to return bool type.
*/
bool is_palindrome_rn()
{
int size=0;
printf("Enter the size of string");
scanf("%d",&size);
char string1[size+1];
printf("Enter the string");
gets(string1);

int length = strlen(string1);
int middle = length/2;

for(int i=0;i<middle;i++)
{
    if(string1[i]!=string1[length-i-1])
    {
        printf("%s \n It is not a palindrome.",string1);
        return false;
    }
}
printf("%s \n It is a palindrome.",string1);
return true;
}


/*
Last type is return and parameter.
*/
bool is_palindrome_rn_pr(char string1[])
{
int length = strlen(string1);
int middle = length/2;

for(int i=0;i<middle;i++)
{
    if(string1[i]!=string1[length-i-1])
    {
        printf("%s \n It is not a palindrome.",string1);
        return false;
    }
}
printf("%s \n It is a palindrome.",string1);
return true;
}



/*
                Program Logic
A palindrome means backwards same as foreward spelling.
like abccba or abcba.
We can think there was a mirror in middle side. Middle element. And chech the other elements each other.
If all elements is match which means we have a Palindrome String.
*/

int main()
{
    char str1[] = "abccba";
    int length = strlen(str1);
    int middle = length / 2 ;
    int counter = 0;

    for(int i=0;i<middle;i++)
    {
        if(str1[i]!=str1[length-i-1])
        {
            printf("It is not a palindrome");
            break;
        }else{
            counter++;
        }
    }

    if(counter==middle)
        {
        printf("It is a palindrome");
        }

    return 0;
}
