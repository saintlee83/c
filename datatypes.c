#include <stdio.h>

int main() {
    int digits = 1; // 2byte (16bit)
    long long_digits = 1000000000000000; // 4byte (32bit)

    char c = 'c'; // 1 byte (8bit)
    char c1[] = "Hello";

    printf("%lu, %lu, %lu, %lu", sizeof(digits), sizeof(long_digits), sizeof(c), sizeof(c1));
}