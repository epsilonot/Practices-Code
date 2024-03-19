/*#include <stdio.h>
#include <math.h>
int main()
{
    double x, n;
    double power(double, double);
    printf("Enter x ,y:");
    scanf("%lf %lf", &x, &n);
    printf("%.4lf to power %.2lf is %lf\n", x, n, power(x, n));
    return 0;
}
double power(double base, double exp)
{
    int i;
    if (exp == 0)
        return 1;
    else if (exp < 0)
    {
        if (exp == (int)exp)
        {
            for (i = 1; i < exp; i++)
            {
                base = base * base;
            }
            double in_pow = 1 / base;
            return in_pow;
        }
        else
        {
            double result = pow(sqrt(base), exp);
            return result = 1 / result;
        }
    }
    else if (exp > 0)
    {
        if (exp == (int)exp)
        {
            for (i = 1; i < exp; i++)
            {
                base = base * base;
            }
            return base;
        }
        else
        {
            double result = pow(sqrt(base), exp);
            return result;
        }
    }
    return 0;
}*/

#include <stdio.h>
#include <math.h>

double power(double, double);

int main() {
    double x, n;
    printf("Enter x, n: ");
    scanf("%lf %lf", &x, &n);
    printf("%.4lf to the power %.2lf is %.4lf\n", x, n, power(x, n));
    return 0;
}

double power(double base, double exp) {
    if (exp == 0)
        return 1;
    else if (exp < 0) {
        if (exp == (int)exp) {
            double result = 1;
            for (int i = 0; i > exp; i--)
                result /= base;
            return result;
        } else {
            double result = pow(sqrt(base), exp);
            return 1 / result;
        }
    } else if (exp > 0) {
        if (exp == (int)exp) {
            double result = 1;
            for (int i = 0; i < exp; i++)
                result *= base;
            return result;
        } else {
            double result = pow(sqrt(base), exp);
            return result;
        }
    }
}
