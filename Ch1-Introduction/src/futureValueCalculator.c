#include<stdio.h>
#include<math.h>

int main() 
{
    double principal, future_value, rate_of_interest, number_of_years_of_investment;
    
    printf("Welcome to the program to calculate the future value of your current investment\n");
    
    printf("Please enter the current investment amount\n");
    scanf("%lf", &principal);
    
    printf("Please enter the expected rate of interest\n");
    scanf("%lf", &rate_of_interest);

    printf("Please enter the number of years of investment\n");
    scanf("%lf", &number_of_years_of_investment);

    double amended_percentage_interest_rate = 1.00000 + (rate_of_interest/100);

    //future_value = principal * pow(amended_percentage_interest_rate, number_of_years_of_investment);

    future_value = principal * pow(1 + rate_of_interest/100, number_of_years_of_investment);
    printf("\nYour future value on principal of %lf after %lf with expected rate of interest of %lf is %lf", 
    principal, number_of_years_of_investment, rate_of_interest, future_value);

    return 0;

}