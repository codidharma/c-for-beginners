#include <stdio.h>

int main()
{
    /*This tutorial works with some of the basic escape characters*/

    /*Lets print a table of numbers using 
    1. Tab character /t and newline character /n*/

    printf("FirstName\tMiddleName\tLastName\n");
    printf("Mandar\tRavindra\tDharmadhikari\n");
    printf("Rocky\tStrongman\tBalboa\n");

    /*Lets print a quote by escaping " and ' characters*/

    printf("\"Let\'s do this\" - some bro\n");

    /*Lets escape the \ by printing */

    printf("Some string with \\\n");

    


    return 0;
}