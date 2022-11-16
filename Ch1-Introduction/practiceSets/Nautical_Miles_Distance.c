/*
Write a program to receive values of latitude (L1, L2) and longitude
(G1, G2), in degrees, of two places on the earth and output the 
distance (D) between them in nautical miles. The formula for 
distance in nautical miles is:
D = 3963 cos^-1
( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) )

*/

#include<stdio.h>
#include<math.h>

#define PI 3.14159

float Convert_Degrees_To_Radians(float degree_value)
{
    return ((PI/180) * degree_value);

}

int main()
{
    float point_one_latitude_degrees, point_one_longitude_degrees, point_two_latitude_degrees, point_two_longitude_degrees = 0.0; 
    printf("\nWelcome to the program to calculate the distance between two coordinates on earth in Nautical Miles");
    printf("\nPlease enter the Latitude and Longitude for first point in degrees");
    printf("\nLatitude:");
    scanf("%f", &point_one_latitude_degrees);
    printf("\nLongitude:");
    scanf("%f", &point_one_longitude_degrees);
    printf("\nPLease enter the Latitude and Longitude for second point in degrees");
    printf("\nLatitude:");
    scanf("%f", &point_two_latitude_degrees);
    printf("\nLongitude:");
    scanf("%f", &point_two_longitude_degrees);
    
    //Convert the radians to degrees

    float point_one_latitude_radians = Convert_Degrees_To_Radians(point_one_latitude_degrees);
    float point_one_longitude_radians = Convert_Degrees_To_Radians(point_one_longitude_degrees);
    float point_two_latitude_radians = Convert_Degrees_To_Radians(point_two_latitude_degrees);
    float point_two_longitude_radians = Convert_Degrees_To_Radians(point_two_longitude_degrees);

    float distance_between_points_nautical_miles = 
        3963 * acos(sin(point_one_latitude_radians) * sin(point_two_latitude_radians) 
        + cos(point_one_latitude_radians) * cos(point_two_latitude_radians) * cos(point_two_longitude_radians - point_one_longitude_radians));
    
    printf("\nThe distance between two points is %.3f nautical miles", distance_between_points_nautical_miles);

    return 0;
}