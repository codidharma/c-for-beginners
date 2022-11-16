/*
Write a program to receive Cartesian co-ordinates (x, y) of a point 
and convert them into polar co-ordinates (r, phi).
Hint: r = sqrt ( x2+ y2) and phi = tan-1( y / x )
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float cartesian_x_coordinate, cartesian_y_coordinate = 0.0;
    printf("\nWelcome to the program to convert cartesian co-ordinates to the polar co-ordinates");
    printf("\nPlease enter the x co ordinate:");
    scanf("%f", &cartesian_x_coordinate);
    printf("\nPlease enter the y co ordinate:");
    scanf("%f", &cartesian_y_coordinate);

    float polar_r_coordinate = sqrt(pow(cartesian_x_coordinate, 2) + pow(cartesian_y_coordinate, 2));
    float polar_phi_coordinate = atan(cartesian_y_coordinate/cartesian_x_coordinate);

    printf("\n The polar coordinates for the cartesian coordinates(%.3f, %.3f)", cartesian_x_coordinate, cartesian_y_coordinate);
    printf("are (%.3f,%.3f)", polar_r_coordinate, polar_phi_coordinate);
    
    return 0;
}