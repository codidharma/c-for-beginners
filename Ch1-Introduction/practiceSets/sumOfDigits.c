//If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits.
//e.g. 55555 should give 25, 12345 should give 15 10000 should give 1

#include<stdio.h>

int main()
{
    int input_number, sum_of_digits_of_input_number = 0;
    printf("Welcome to the program to find the sum of the digits of five digit number\n");
    printf("Please enter the five digit number\n");
    scanf("%d", &input_number);

    printf("%d", sum_of_digits_of_input_number);

    while(input_number != 0)
    {
        sum_of_digits_of_input_number += 
        + input_number % 10;

        input_number = input_number / 10;
    }

    
    printf("Sum of the digits of the number %d is %d", input_number, sum_of_digits_of_input_number);
    
    return 0;



    printf("%d\n", input_number % 10);
    printf("%d\n", input_number % 10 %10);
    

}
