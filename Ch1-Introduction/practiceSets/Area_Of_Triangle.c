/* If lengths of three sides of a triangle are input through the 
keyboard, write a program to find the area of the triangle.*/

#include<stdio.h>
#include<math.h>

int main()
{
    float side_one, side_two, side_three = 0.0;
    printf("\nWelcome to the program to calculate the permieter and the area of the triangle");
    printf("\nPlease enter the dimension of first side:");
    scanf("%f", &side_one);
    printf("\nPLease enter the dimension of the second side:");
    scanf("%f", &side_two);
    printf("\nPlease enter the dimension of the third side:");
    scanf("%f", &side_three);

    
    printf("\nSide one : %f", side_one);
    printf("\nSide two: %f", side_two);
    printf("\nSide three: %f", side_three);

    //Check if the sides form a traingle or not

    if((side_one + side_two) <= side_three || (side_one + side_three) <= side_two || (side_two + side_three) <= side_one )
    {
        printf("\nThe sides do not form a triangle. The basic rule for triangle is ");
        printf("'Sum of two sides must be greater than the third side'");
        return 0;
    }


    float perimeter_of_triangle = side_one + side_two + side_three;
    float semiperimeter_of_triangle = perimeter_of_triangle /2;

    float area_of_triangle = sqrt(semiperimeter_of_triangle * (semiperimeter_of_triangle - side_one)
    * (semiperimeter_of_triangle - side_two) * (semiperimeter_of_triangle - side_three));

    printf("\nPerimeter of the triangle is %.3f", perimeter_of_triangle);
    printf("\nArea of the triangle is %.3f", area_of_triangle);

    return 0;

}
