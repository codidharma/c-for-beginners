/*
Write a C function to evaluate the series
sin(x) = x - (x^3/3!) + (x^5/5!) - (x^7/7!) upto 10 terms)
Observations: formula can be rewritten as 

sin(x) = Sum(((-1)^k * x ^2k+1)/2k+1!) from 0 to infinity where, k is a integer

x is in radians

*/

/*
Program logic
1) Accept x in degrees and convert it in radians
2) Accept the number of terms from the user
3) Give output

*/

#include<stdio.h>


int calculatePowerOfInteger(int baseNumber, int raisedToPowerNumber);
float calculatePowerOfFloat(float baseNumber, int raisedToPowerNumber);
int calculateFactorialOfInteger(int number);
void calculateSineAngleInRadiansForNterms(float *angleInRadians, int *numberOfTerms, float *sineOfAngle);

int main()
{
    float angleValInDegrees, angleInRadians, sineOfAngle = 0.0;
    int numberOfTermsInSerires = 0;

    printf("\nWelcome to the program to calculate the sine of an angle.");
    printf("\nEnter the angle in degrees for which you want to calculate the sine");
    scanf("%f", &angleValInDegrees);
    printf("\nEnter the number of terms till which you want to calculate the sine value");
    scanf("%d", &numberOfTermsInSerires);

    angleInRadians = 3.14 * angleValInDegrees / 180;
    printf("\nThe angle in raidans is %f", angleInRadians);

    calculateSineAngleInRadiansForNterms(&angleInRadians, &numberOfTermsInSerires, &sineOfAngle);

    printf("\nValue of sine of angle %f in degrees is %f", angleValInDegrees, sineOfAngle);

    return 0;
}

void calculateSineAngleInRadiansForNterms(float *angleInRadians, int *numberOfTerms, float *sineOfAngle)
{
    for(int i = 0; i < *numberOfTerms; i++)
    {
        
        *sineOfAngle = *sineOfAngle + (calculatePowerOfInteger(-1, i) * calculatePowerOfFloat(*angleInRadians, (2*i +1)))/calculateFactorialOfInteger((2 * i + 1));
    }
}

int calculateFactorialOfInteger(int number)
{
    int factorial = 1;

    for(int i = 1; i <= number; i++)
    {
        factorial *= i;

    }

    return factorial;
}

int calculatePowerOfInteger(int baseNumber, int raisedToPowerNumber)
{
    int poweredNumber = 1;

    for(int i = 1; i <= raisedToPowerNumber; i++)
    {
        poweredNumber *= baseNumber;

    }

    return poweredNumber;
}

float calculatePowerOfFloat(float baseNumber, int raisedToPower)
{
    float poweredNumber = 1.0;

    for(int i = 1; i <= raisedToPower ; i++)
    {
        poweredNumber *= baseNumber;

    }
    return poweredNumber;
}





