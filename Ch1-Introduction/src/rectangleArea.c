#include<stdio.h>

int main()
{

    /*This is a program to accept the values of the length and breadth of the rectangle and print the area*/

    /*Let us define the variables to store the length, breadth and the area*/

    float length, breadth, area;

    /*Accept the length and breadth from the user*/

    printf("Welcome to the program to calculate the area of the rectangle \n");
    printf("Enter the length of the rectangle as integer or floating point number\n");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle as the integer or floating point number\n");
    scanf("%f", &breadth);

    area = length * breadth;

    printf("The area of the rectangle as a floating point number is %f\n", area);
    
    return 0;

}