#include<stdio.h>

int main()
{
    int i = 3;
    int *j, **k;

    // J stores the memory address of i
    j = &i;

    //k stores the memory address of j
    k = &j;

    printf("\nAddress of i = %u", &i);
    printf("\nAddress of i as pointed by variable j = %u", j);
    printf("\nAddress of i as pointed by variable k = %u", *k);
    printf("\nValue of i = %d", i);
    printf("\nValue of i by deferencing address of i = %d", *(&i));
    printf("\nValue of i by dereferencing j = %d", *j);
    printf("\nValue of i by double deferencing address of j = %d", *(*(&j)) );
    printf("\nValue of i by double dereferencing k = %d", **k);
    printf("\nValue of i by triple dereferencing address of k = %d", *(*(*(&k))));

    return 0;
}