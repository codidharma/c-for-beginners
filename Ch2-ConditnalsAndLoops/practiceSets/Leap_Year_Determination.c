/*
Any year is entered through the keyboard, write a program to 
determine whether the year is leap or not. Use the logical operators 
&& and ||

Logic for the Leap Year: 
1) The year must be divisible by 4
2) If it is divisible by 100, it should also be divisible by 400
*/

#include<stdio.h>

int main()
{
    int input_year = 0;
    printf("\nWelcome to the program to determine if the year is a leap year or not");
    printf("\nEnter the year value: ");
    scanf("%d", &input_year);

    /*The year is a leap year if the year is divisible by 4, if the year is century year i.e divisible by 100,
    then it also needs to be divisible by 400*/

    // if(input_year % 400 == 0)
    // {
    //     printf("The year %d is a leap year", input_year);
    // }
    // else if(input_year % 100 == 0)
    // {
    //     printf("The year %d is not a leap year", input_year);
    // }
    // else if(input_year % 4 == 0)
    // {
    //     printf("The year %d is a leap year", input_year);
    // }
    // else
    // {
    //     printf("The year %d is not a leap year", input_year);   
    // }
    // if( (year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0) )

    if(input_year % 400 == 0 || (input_year % 100 != 0 && input_year % 4 == 0))
    {
        printf("The year %d year is a leap year.", input_year);

    }
    else
    {
        printf("The year %d is not a leap year", input_year);
    }

    return 0;
}