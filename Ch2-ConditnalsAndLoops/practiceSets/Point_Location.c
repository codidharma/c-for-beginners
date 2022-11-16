/*
Given a point (x, y), write a program to find out if it lies on the X-axis, Y-axis or on the origin.
*/

#include<stdio.h>

int main()
{
    float x_coordinate, y_coordinate = 0.0;
    printf("Please enter the x and y co ordinates");
    scanf("%f %f", &x_coordinate, &y_coordinate);

    if(x_coordinate != 0 && y_coordinate != 0)
    {
        printf("\nThe point does not lie on x or y axis or on origin");
        return 0;

    }

    if(x_coordinate == 0 && y_coordinate == 0)
    {
        printf("\nThe point lies on origin");
        return 0;
    }

    if(x_coordinate == 0)
    {
        printf("\nThe point lies on x-axis");
        
    }
    else
    {
        printf("\nThe point lies on x-axis");
    }
    
    return 0;
}