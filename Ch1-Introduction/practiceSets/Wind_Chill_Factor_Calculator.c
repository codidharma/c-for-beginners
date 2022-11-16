/*
Wind chill factor is the felt air temperature on exposed skin due to 
wind. The wind chill temperature is always lower than the air 
temperature, and is calculated as per the following formula:
wcf = 35.74 + 0.6215t + ( 0.4275t - 35.75 ) * v^0.16
where t is the temperature and v is the wind velocity. Write a 
program to receive values of t and v and calculate wind chill factor
(wcf).

*/

#include<stdio.h>
#include<math.h>

int main()
{
    float wind_temprature_deg_celcius, wind_velocity = 0.0;

    printf("\nWelcome to the Wind Chill Factor Calculator Program.");
    
    printf("\nPlease enter the value of the air temprature in degree celcius:");
    scanf("%f", &wind_temprature_deg_celcius);

    printf("\nPlease enter the value of the air velocity in meters per second:");
    scanf("%f", &wind_velocity);

    float wind_chill_factor = 35.74 + (0.6125 * wind_temprature_deg_celcius) +
        ((0.4275 * wind_temprature_deg_celcius - 35.75) * pow(wind_chill_factor, 0.16));
    
    printf("\nThe wind chill factor is %.3f", wind_chill_factor);

    return 0;
}