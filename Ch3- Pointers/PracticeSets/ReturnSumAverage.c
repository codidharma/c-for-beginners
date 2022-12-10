/*
Write a function that receives 5 integers and returns the sum, 
average and standard deviation of these numbers. Call this function 
from main( ) and print the results in main( ).
*/

#include<stdio.h>
#include<math.h>

void numberOperations(int* a, int* b, int* c, int* d, int* e, int* sum, float * average, float* std);

int main()
{
    int a = 1, b = 2, c = 3, d= 4, e = 5, sum = 0;

    float avg, std = 0.0;

    numberOperations(&a, &b, &c, &d, &e, &sum, &avg, &std);

    printf("\nSum of numbers is %d", sum);
    printf("\nAverage of numbers is %f", avg);
    printf("\nStandard Deviation of numbers is %f", std);

    return 0;
}

void numberOperations(int* a, int* b, int* c, int* d, int* e, int* sum, float * avg, float* std)
{
    *sum = (*a + *b  + *c + *d + *e );
    *avg = *sum /5;
    

    float squarOfDistanceFromMean = 0.0;

    squarOfDistanceFromMean = squarOfDistanceFromMean + pow((double)(*avg - (float)*a), 2);
    squarOfDistanceFromMean = squarOfDistanceFromMean + pow((double)(*avg - (float)*b), 2);
    squarOfDistanceFromMean = squarOfDistanceFromMean + pow((double)(*avg - (float)*c), 2);
    squarOfDistanceFromMean = squarOfDistanceFromMean + pow((double)(*avg - (float)*d), 2);
    squarOfDistanceFromMean = squarOfDistanceFromMean + pow((double)(*avg - (float)*e), 2);

    *std = sqrt((double)(squarOfDistanceFromMean/5));

}