#include<stdio.h>

void swapByValue(int x, int y);
void swapByReference(int* a, int* b);

int main()
{
    int a = 10, b = 20;

    printf("\na = %d and b = %d", a, b);
    swapByValue(a, b);
    printf("\nAfter swapping by Value a = %d and b = %d", a, b);
    swapByReference(&a, &b);
    printf("\nAfter swapping by Ref a = %d and b = %d", a, b);


    return 0;
}

void swapByValue(int x, int y)
{
    int temp = 0;
    temp = x;
    x = y;
    y = temp;

    printf("\nx = %d and y = %d", x, y);

}

void swapByReference(int* a, int* b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
    
}