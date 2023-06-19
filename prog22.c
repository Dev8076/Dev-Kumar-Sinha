#include <stdio.h>

void swap(void* ptr1, void* ptr2, size_t size) {
    unsigned char* charPtr1 = (unsigned char*)ptr1;
    unsigned char* charPtr2 = (unsigned char*)ptr2;

    while (size--) {
        unsigned char temp = *charPtr1;
        *charPtr1++ = *charPtr2;
        *charPtr2++ = temp;
    }
}

int main() {
    int num1 = 5, num2 = 10;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2, sizeof(int));
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    double dbl1 = 3.14, dbl2 = 2.718;
    printf("Before swap: dbl1 = %f, dbl2 = %f\n", dbl1, dbl2);

    swap(&dbl1, &dbl2, sizeof(double));
    printf("After swap: dbl1 = %f, dbl2 = %f\n", dbl1, dbl2);

    return 0;
}
