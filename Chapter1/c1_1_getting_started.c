// tells the compiler to include information about the standard input/output library;
#include <stdio.h>
//  .h file is a header file that contains fuction declarations, macros, constants, and data type definitions shared across multiple source files

// int main(void) 
int main() 
{
    // printf() : is a library function that prints output
    printf("Hello, World is so boring, but\n");
    printf("C Programming is fun\n");

    printf("hello, ");
    printf("world");
    printf("\n");

    return 0;
}
/*
compile : cc(or gcc) code.c
-> a.out

excution : ./a.out

result :
"Hello, World is so boring, but"
"C Programming is fun"
*/