/*
Any character is entered through the keyboard, write a program to 
determine whether the character entered is a capital letter, a small 
case letter, a digit or a special symbol.
Characters  ASCII Values
A – Z       65 – 90
a – z       97 – 122
0 – 9       48 – 57
special symbols 0 - 47, 58 - 64, 91 - 96, 123 - 127
*/

#include<stdio.h>

int main()
{
    char c;
    printf("\nWelcome to the program to determine if the entered ASCII character is");
    printf("\n between A-Z or a-z or 0-9 or a special character");
    printf("\nEnter the character: ");
    scanf("%c", &c);

    if(c >= 65 && c <= 90)
    {
        printf("You have entered upper case letter from the alphabet");
    }
    if(c >= 97 && c <= 122)
    {
        printf("You have entered lower case letter from the alphabet");
    }
    if(c >= 48 && c <= 57)
    {
        printf("You have entered a number between 0 to 9");
    }

    if((c >= 0 && c <= 47) ||
       (c >= 58 && c <= 64) ||
       (c >= 91 && c<= 96) ||
       (c >= 123 && c <= 127))
    {
        printf("You have entered a special character");
    }

    


    return 0;
}