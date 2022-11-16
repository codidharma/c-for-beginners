/*
Given the coordinates (x, y) of center of a circle and its radius, write 
a program that will determine whether a point lies inside the circle, 
56 Let Us C
on the circle or outside the circle. (Hint: Use sqrt( ) and pow( )
functions)
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float circle_centre_x_coordinate, circle_centre_y_coordinate, circle_radius = 0.0;
    float inspection_point_x_coordinate, inspection_point_y_coordinate = 0.0;

    printf("\nWelcome to the program to calculate if the point lies inside or outside of the circle");
    printf("\nEnter the x and y co ordinate of the centre of the circle.");
    printf("\nx coordinate: ");
    scanf("%f", &circle_centre_x_coordinate);
    printf("\ny coordinate: ");
    scanf("%f", &circle_centre_y_coordinate);
    printf("\nEnter the value for the radius of circle: ");
    scanf("%f", &circle_radius);

    printf("Enter the x and y coordinate for the point for the inspection");
    printf("\nx coordinate: ");
    scanf("%f", &inspection_point_x_coordinate);
    printf("\ny coordinate: ");
    scanf("%f", &inspection_point_y_coordinate);

    float distance_of_inspection_point_from_centre = 
        sqrt(pow(circle_centre_x_coordinate - inspection_point_x_coordinate, 2) +
         pow(circle_centre_y_coordinate - inspection_point_y_coordinate, 2));
    
    if(distance_of_inspection_point_from_centre < circle_radius)
    {
        printf("\nThe point is inside the circle");
        return 0;
    }

    if(distance_of_inspection_point_from_centre == circle_radius)
    {
        printf("\nThe point is on the circle circumference");
        return 0;
    }

    printf("\nThe point is outside the circle");


    return 0;
}