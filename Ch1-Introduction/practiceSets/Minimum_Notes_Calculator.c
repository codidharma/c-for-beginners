/*
Consider a currency system in which there are notes of seven 
denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If 
a sum of Rs. N is entered through the keyboard, write a program to 
compute the smallest number of notes that will combine to give Rs. 
N
*/

#include<stdio.h>

int main()
{
    int sum_of_money, number_of_required_notes = 0;
    printf("\nWelcome to the program to calculate the minimum number of notes");
    printf("\nPlease enter a integer sum of money");
    scanf("%d", &sum_of_money);

    number_of_required_notes += sum_of_money / 100;
    sum_of_money = sum_of_money % 100;

    if(sum_of_money != 0)
    {
        number_of_required_notes += sum_of_money /50;

        sum_of_money = sum_of_money % 50;
    }

    if(sum_of_money != 0)
    {
        number_of_required_notes += sum_of_money /10;

        sum_of_money = sum_of_money % 10;
    }

    if(sum_of_money != 0)
    {
        number_of_required_notes += sum_of_money /5;

        sum_of_money = sum_of_money % 5;
    }

    
    if(sum_of_money != 0)
    {
        number_of_required_notes += sum_of_money / 2;

        sum_of_money = sum_of_money % 2;
    }

    if(sum_of_money != 0)
    {
        number_of_required_notes += sum_of_money / 1;

        sum_of_money = sum_of_money % 1;
    }

    printf("\nMinimum number of notes required is %d", number_of_required_notes);

}
