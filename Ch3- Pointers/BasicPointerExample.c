#include<stdio.h>

int main()
{
    printf("This is example explains the pointer concept");
    
    // i stores the value of an 3 in the memory.
    int i = 3;

    //j stores the address of the memory location of i 
    int *j = &i;

    //k gives the value stored at the memory location stored in k
    int *k;

    k = &i;

    printf("\nThe value of i is %d", i);
    printf("\nThe value of memory address of i is %u", j);
    printf("\nThe value of memory address of i using variable k is %d ", k);
    printf("\nThe value stored at memory location stored by variable j is %d", *j);
    printf("\nThe value stored at memory location stored by k is %d", *k);

    return 0;
}