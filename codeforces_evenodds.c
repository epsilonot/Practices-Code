/*Being a nonconformist, Volodya is displeased with the current state of things, particularly with the order
of natural numbers (natural number is positive integer number). He is determined to rearrange them. But there
are too many natural numbers, so Volodya decided to start with the first n. He writes down the following
sequence of numbers: firstly all odd integers from 1 to n (in ascending order), then all even integers from
1 to n (also in ascending order). Help our hero to find out which number will stand at the position number k.
Input
The only line of input contains integers n and k (1 ≤ k ≤ n ≤ 1012).
Please, do not use the %lld specifier to read or write 64-bit integers in C++. It is preferred to use the cin,
 cout streams or the %I64d specifier
Output
Print the number that will stand at the position number k after Volodya's manipulations.
Examples
inputCopy
10 3
outputCopy
5
inputCopy
7 7
outputCopy
6
Note
In the first sample Volodya's sequence will look like this: {1, 3, 5, 7, , 2, 4, 6, . The third place in
the sequence is therefore occupied by the number 5.*/

#include <stdio.h>
int main()
{
    long long int n, k, a, b; // n-5 1 3 5 2 4 k = 7
    scanf("%ld %lld", &n, &k);
    a = k * 2 - 1;
    a ==5;
    if (a > n)
    {
        if (n % 2 == 0)
            b = n / 2;
        else
            b = n / 2 + 1;
        k = k - b;
        b = k * 2;
        printf("%lld", b);
    }
    else
        printf("%lld", a);
    return 0;
}