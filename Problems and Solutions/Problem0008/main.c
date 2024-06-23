#include <stdio.h>
#include <stdlib.h>
/*
First type is void no parameter
*/
void c_f_converter()
{
    double celsius;
    printf("Enter the C value: ");
    scanf("%lf",&celsius);

    double fahrenheit;
    fahrenheit = (celsius*1.8)+32;

    printf("C: %lf equivalent to F: %lf",celsius,fahrenheit);
}

/*
2nd type is void via parameter
*/
void c_f_converter_pr(double celsius)
{
    double fahrenheit;
    fahrenheit = (celsius*1.8)+32;

    printf("C: %lf equivalent to F: %lf",celsius,fahrenheit);
}

/*
3rd type is return and no parameter
*/
double c_f_converter_rn()
{
    double celsius;
    printf("Enter the C value: ");
    scanf("%lf",&celsius);

    double fahrenheit;
    fahrenheit = (celsius*1.8)+32;

    printf("C: %lf equivalent to F: %lf",celsius,fahrenheit);
    return fahrenheit;
}

/*
Last type is return and parameter
*/
double c_f_converter_rn_pr(double celsius)
{
    double fahrenheit;
    fahrenheit = (celsius*1.8)+32;

    printf("C: %lf equivalent to F: %lf",celsius,fahrenheit);
    return fahrenheit;
}


/*
            Main Program Logic
Multiply celsius value by 1.8 and add 32
*/
int main()
{
    double celsius;
    printf("Enter the celsius value: ");
    scanf("%lf",&celsius);

    double fahrenheit;
    fahrenheit = (celsius*1.8)+32;

    printf("Celsius:%lf equivalent to Fahreheit:%lf ",celsius,fahrenheit);

    return 0;
}
