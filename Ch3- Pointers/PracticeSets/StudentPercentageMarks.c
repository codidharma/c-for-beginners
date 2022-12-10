/*
Write a function that receives marks received by a student in 3 
subjects and returns the average and percentage of these marks. 
Call this function from main( ) and print the results in main( ).

*/

#include<stdio.h>

void percentageCalculator(float *sub1, float *sub2, float *sub3, float * average, float *percentage, float *maxmarks);

int main()
{
    float subject1, subject2, subject3, percentage, averageMarks = 0.0;
    float maxMarksInSubeject = 100.0;
    printf("\nWelcome to the program to calculate percentage and average");
    printf("\nPlease enter the marks of subject 1, 2 and 3 one after another");
    scanf("%f%f%f", &subject1, &subject2, &subject3);
    percentageCalculator(&subject1, &subject2, &subject3, &averageMarks, &percentage, &maxMarksInSubeject);
    printf("\nThe average of obtained marks is %f and percentage of obtained marks is %f", averageMarks, percentage);

    return 0;
}


void percentageCalculator(float *sub1, float *sub2, float *sub3, float * average, float *percentage, float *maxmarks)
{
    float totalSecuredMarks = *sub1 + *sub2 + *sub3;

    *average = totalSecuredMarks / 3.0;
    *percentage = (totalSecuredMarks * 100) / (*maxmarks * 3);
}
