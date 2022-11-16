/*
If value of an angle is input through the keyboard, write a program 
to print all its Trigonometric ratios
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float angle_degrees = 0.0;

    printf("Welcome to the program to calculate the trignometric ratios for an angle");
    printf("\nPlease enter the value of the angle in degrees");
    scanf("%f", &angle_degrees);

    float angle_radians = 3.14159 * angle_degrees/ 180;

    printf("\nSine value: %.3f", sin(angle_radians));
    printf("\nCosine value: %.3f", cos(angle_radians));
    printf("\nTangent value: %.3f", tan(angle_radians));
    

}