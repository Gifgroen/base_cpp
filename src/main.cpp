#include <stdio.h>

#include "base.h"

int main(int Argc, char **Argv) 
{
    printf("Hello world!\n");

    printf("\n=== context ===\n");

    printf("CL = %d\n", COMPILER_CL);
    printf("CLANG = %d\n", COMPILER_CLANG);
    printf("GCC = %d\n", COMPILER_GCC);

    return 0;
}