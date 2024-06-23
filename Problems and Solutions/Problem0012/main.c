#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
1st Function type Void via no parameter (Primitive)
*/
void count_vowel()
{
int n=0;
printf("Enter the string length");
scanf("%d",&n);

char s1[n+1]; // 1 more memory because of '\0' char.
gets(s1); // Using gets function to accept continuous string

int count = 0;

for(int i=0;i<strlen(s1);i++)
{
   switch(toupper(s1[i]))
   {
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
    count++;
   }
}


printf("Vowel count is : %d",count);
}


/*
2nd Function type Void via parameter
*/
void count_vowel_pr(char s1[])
{
int count = 0;

for(int i=0;i<strlen(s1);i++)
{
   switch(toupper(s1[i]))
   {
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
    count++;
   }
}

printf("Vowel count is : %d",count);
}

/*
3rd Function type Return via no parameter
*/
int count_vowel_rn()
{
int n=0;
printf("Enter the string length");
scanf("%d",&n);

char s1[n+1]; // 1 more memory because of '\0' char.
gets(s1); // Using gets function to accept continuous string

int count = 0;

for(int i=0;i<strlen(s1);i++)
{
   switch(toupper(s1[i]))
   {
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
    count++;
   }
}


printf("Vowel count is : %d",count);

return count;
}

/*
4th Function type return via parameter
*/
int count_vowel_rn_pr(char s1[])
{
int count = 0;

for(int i=0;i<strlen(s1);i++)
{
   switch(toupper(s1[i]))
   {
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
    count++;
   }
}


printf("Vowel count is : %d",count);
return count;
}










/*
                    Main Program Logic
For this problem we need to use two libraries. One of them is string.h
other is ctype.h this two libraries can assist us.

Logic is we iterate through our string. And each iteration use the upper
function. And analyze it with switch fall through logic.
*/

int main()
{

    char s1[] = "It's a wonderful life!";
    int count = 0;

    for(int i=0;i<strlen(s1);i++)
    {
        /*
        Fall Through Logic.
        Essentialy it means all cases go to bottom and do what is commanded.
        */
        switch (toupper(s1[i]))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
        }
    }

    printf("Vowel count: %d\n",count);

    return 0;
}
