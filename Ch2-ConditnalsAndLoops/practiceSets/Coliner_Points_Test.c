/*
Given three points (x1, y1), (x2, y2) and (x3, y3), write a program 
to check if all the three points fall on one straight line.
*/

#include<stdio.h>

int main()
{
    float point1_x_coordinate, point1_y_coordinate = 0.0;
    float point2_x_coordinate, point2_y_coordinate = 0.0;
    float point3_x_coordinate, point3_y_coordinate = 0.0;

    printf("\nWelcome to the program to determine if three points are colinear");
    printf("\nEnter the X and Y co ordinate of first point");
    printf("\nX Coordinate:");
    scanf("%f", &point1_x_coordinate);
    printf("\nY Coordinate:");
    scanf("%f", &point1_y_coordinate);

    printf("\nEnter the X and Y co ordinate of second point");
    printf("\nX Coordinate:");
    scanf("%f", &point2_x_coordinate);
    printf("\nY Coordinate:");
    scanf("%f", &point2_y_coordinate);

    printf("\nEnter the X and Y co ordinate of third point");
    printf("\nX Coordinate:");
    scanf("%f", &point3_x_coordinate);
    printf("\nY Coordinate:");
    scanf("%f", &point3_y_coordinate);

    //Two lines are collinear if slopes of two lines formed by the points is same
    //i.e (point2_y_coordinate - point1_y_coordinate) / (point2_x_coordinate - point1_x_coordinate) 
    // == (point3_y_coordinate - point2_y_coordinate) / (point3_x_coordinate - point2_x_coordinate)
    // To avoid the divide by zero exception, compare the products
    //i.e (point2_y_coordinate - point1_y_coordinate) * (point3_x_coordinate - point2_x_coordinate)
    // == (point3_y_coordinate - point2_y_coordinate) * (point2_x_coordinate - point1_x_coordinate) 

    float product1 = (point2_y_coordinate - point1_y_coordinate) * (point3_x_coordinate - point2_x_coordinate);
    float product2 = (point3_y_coordinate - point2_y_coordinate) * (point2_x_coordinate - point1_x_coordinate);

    if(product1 == product2)
    {
        printf("\nThe given points are collinear");

    }
    else
    {
        printf("\nThe points are not collinear");
    }
    
    return 0;

}