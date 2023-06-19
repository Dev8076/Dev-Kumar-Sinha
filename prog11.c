#include<stdio.h>

// Function to find the biggest of two numbers using if-else statements
int findBiggestUsingIfElse(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// Function to find the biggest of two numbers using the ternary operator
int findBiggestUsingTernary(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Using if-else
    int biggestIfElse = findBiggestUsingIfElse(num1, num2);
    printf("Using if-else, the biggest number is: %d\n", biggestIfElse);

   
    return 0;
}
