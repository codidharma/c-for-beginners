/*
Given three variables x, y, z write a function to circularly shift their 
values to right. In other words if x = 5, y = 8, z = 10, after circular 
shift y = 5, z = 8, x =10. Call the function with variables a, b, c to 
circularly shift values.
*/

#include<stdio.h>

void circularShiftValues(float* a, float* b, float* c);

int main()
{
    float x, y, z = 0.0;
    printf("\nWelcome to the program to shift the three values in circular to right");
    printf("\nEnter three numbers x, y,z : ");
    scanf("%f%f%f", &x, &y, &z);
    printf("\nValues before circular rotation x = %f, y = %f, z = %f", x, y, z);
    circularShiftValues(&x, &y, &z);
    printf("\nValues after circular rotation x = %f, y = %f, z = %f", x, y, z);
    return 0;
}

void circularShiftValues(float* a, float* b,float* c)
{
    float temp1 = *b;
    *b = *a;
    float temp2 = *c;
    *c = temp1;
    *a = temp2;
}