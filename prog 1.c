#include <stdio.h>

void printExponent(double x) {
    unsigned long long* ptr = (unsigned long long*)&x;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;

    printf("Hexadecimal exponent: 0x%llX\n", exponent);
    
    // Convert exponent to binary
    printf("Binary exponent: 0b");
    for (int i = 11; i >= 0; i--) {
        unsigned long long mask = 1LL << i;
        printf("%d", (exponent & mask) != 0);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}
