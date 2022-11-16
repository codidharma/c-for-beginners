/*Given the length and breadth of a rectangle, write a program to find 
whether the area of the rectangle is greater than its perimeter. For 
example, the area of the rectangle with length = 5 and breadth = 4 
is greater than its perimeter.
*/

#include<stdio.h>

int main()
{
    float rectangle_length, rectangle_breadth, rectangle_area, rectangle_perimeter = 0.0;
    printf("\nWelcome to the comparision program");
    printf("\nEnter the length of the rectangle");
    scanf("%f", &rectangle_length);
    printf("\nEnter the breadth of the rectangle");
    scanf("%f", &rectangle_breadth);

    rectangle_area = rectangle_length * rectangle_breadth;
    rectangle_perimeter = 2 * (rectangle_length + rectangle_breadth);

    if(rectangle_area > rectangle_perimeter)
    {
        printf("\n The area of the rectangle is greater than the perimeter of the rectangle");
        return 0;
    }

    if(rectangle_area == rectangle_perimeter)
    {
        printf("\n The area of the rectangle is equal to the perimeter of the rectangle");
        return 0;
    }

    printf("\nThe aread of the rectangle is less than the perimeter of the rectangle");
    return 0;
   

}