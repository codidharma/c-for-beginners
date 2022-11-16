#include<stdio.h>

int main()
{
    int input_number;
    printf("Welcome to the program to reverse the digits of a number\n");
    printf("Please enter a whole number:");
    scanf("%d", &input_number);

    int remainder = 0;
    int reversed_number = 0;
    
    while(input_number != 0)
    {
        remainder = input_number % 10;
        reversed_number = reversed_number * 10 + remainder;
        input_number = input_number /10;
    }

    printf("\n The reversed number is %d", reversed_number);
    return 0;
}