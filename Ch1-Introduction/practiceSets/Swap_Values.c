/*
Two numbers are input through the keyboard into two locations C 
and D. Write a program to interchange the contents of C and D.
*/

#include<stdio.h>

int main()
{
    int number_1, number_2 = 0;

    printf("\nWelcome to the program which swaps the two numbers");
    printf("\nEnter the first number");
    scanf("%d", &number_1);
    printf("\nEnter the second number");
    scanf("%d", &number_2);

    printf("Numbers before swap: %d and %d", number_1, number_2);

    int temp = number_1;
    number_1 = number_2;
    number_2 = temp;

    printf("\nNumbers after swap: %d and %d", number_1, number_2);

}