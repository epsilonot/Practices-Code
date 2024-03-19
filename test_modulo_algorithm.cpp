#include<bits/stdc++.h>
using namespace std;
#include <iostream>

// Function to perform modular exponentiation recursively
long long modularExponentiation(long long base, long long exponent, long long modulus) {
    // Base case: If exponent is 0, return 1 (base case of exponentiation)
    if (exponent == 0)
        return 1;

    // If exponent is odd
    if (exponent % 2 == 1) {
        long long result = (base % modulus * modularExponentiation(base, exponent - 1, modulus)) % modulus;
        return result;
    }
    // If exponent is even
    else {
        long long result = modularExponentiation(base, exponent / 2, modulus);
        return (result % modulus * result % modulus) % modulus;
    }
}

int main() {
    long long base, exponent, modulus;
    std::cout << "Enter the base: ";
    std::cin >> base;
    std::cout << "Enter the exponent: ";
    std::cin >> exponent;
    std::cout << "Enter the modulus: ";
    std::cin >> modulus;

    // Calculate base^exponent mod modulus
    long long result = modularExponentiation(base, exponent, modulus);
    std::cout << "Result: " << result << std::endl;

    return 0;
}

