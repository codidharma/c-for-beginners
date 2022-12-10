#include<stdio.h>

int main()
{
    int a = 1;
    float b = 1.0;
    double c = 3;
    char d = 1;

    int* pa = &a;
    float* pb = &b;
    double* pc = &c;
    char* pd = &d;

    printf("\nSize of integer is %d bytes", sizeof(a));
    printf("\nSize of float is %d bytes", sizeof(b));
    printf("\nSize of double is %d bytes", sizeof(c));
    printf("\nSize of char is %d bytes", sizeof(d));
    printf("\nSize of int pointer is %d bytes", sizeof(pa));
    printf("\nSize of float pointer is %d bytes", sizeof(pb));
    printf("\nSize of double pointer is %d bytes", sizeof(pc));
    printf("\nSize of char pointer is %d bytes", sizeof(pd));
    


}