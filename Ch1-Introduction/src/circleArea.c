#include<stdio.h>
#include<math.h>

int main()
{
    /*This program accepts the radius of the circle and prints the value of the area of the circle*/

    float radius, area;
    printf("Welcome to the program to calculate the area of a circle\n");
    printf("Please enter the radius of the circle");
    scanf("%f", &radius);

    area = 3.14 * pow(radius, 2);

    printf("The area of the circle is %f\n", area);


}