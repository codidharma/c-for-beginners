#include<stdio.h>
#include<stdbool.h>

int main()
{
    char c = '1'; //Single character %c as format specifier
    char charArray[] = "This is char array";  // Char array. Uses %s as format specifier

    float f = 4.56758585855; //uses 4 bytes - precison upto 6-7 digits after decimal point. %f as format specifier
    double d = 4.12345678912345678; //uses 8 bytes and 64 bit precision and can save upto 16 digits. %lf as format specifier

    bool b = true; //uses 1 byte for memory; %d as format specifier to display 0 - false 1- true

    /* Uses 1 byte, (-128 to 127)This stores the number as a character, we can use %d to show the number representation or %c to convert the number to ANCII charcter*/
    char num = 120; 

    /*unsigned key word means that the value assigned to the variable is positive only. by default most datatype are marked signed*/

    unsigned char unsignedNum = 254; // 1 byte of memory, can store from 0 to 255, will reset to 0 if char value goes beyond 255.

    /* short int only uses 2 bytes of memory, range will be from -32768 to 32767 %d is used as format specifier*/
    short int shortInt = 32765;

    /*unsigned short int uses 2 bytes of memory but makes the range of short int double in positive direction  %d is format specifier*/
    unsigned short int unsignedShortInt = 65534;

    /*int data type by default is signed in nature, and are long in nature and the range of the int actually depends upon the platform on which the code is being run. 
    %d is the format specifier*/

    int intNum = -324345;

    /*int intNum = -324345 can also be declared as long int intNum = -324345*/

    /*unsigned makes the int data type positive and doubles the range of the positive integer %u is format specifier*/
    unsigned int unsingnedIntNum  = 65232452;

    /*To accomodate a very big number, we can use the long long notation format specifier is %lld*/
    long long int veryLongIntNum = 12312312324515641;

    /* unsiged key word makes the long long int a positive number and doubles the range. Format specifer is %llu*/
    unsigned long long int unsignedVeryLongIntNum = 1231231232451564125U;
    

    printf("%c\n", c);
    printf("%s\n", charArray);
    printf("%0.15f\n", f); // 0.15 tells printf to display 15 digits after the floating point, we will loose precision after 6 digits
    printf("%0.15lf\n", d); // double retains precision till 16 digits but consumers more memory
    printf("%d\n", b);
    printf("%d\n", num); // displays number
    printf("%c\n", num); //displays character in ASCII character 
    printf("%d\n",unsignedNum );
    printf("%c\n", unsignedNum);
    printf("%d\n", shortInt);
    printf("%d\n", unsignedShortInt);
    printf("%d\n", intNum);
    printf("%u\n", unsingnedIntNum);
    printf("%lld\n", veryLongIntNum);
    printf("%llu", unsignedVeryLongIntNum);
    return 0;
}