#include <stdio.h>
#include <math.h>

int main()
{
    float principal, interest, amount;

    printf("Enter the investment amount: ");
    scanf("%f", &principal);
    interest = (principal * pow((1 + 0.0875), 10)) - principal;
    amount = principal + interest;
    printf("Investment amount after 10 years = %.2f\n", amount);
    return 0;
}
