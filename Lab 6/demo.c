#include <stdio.h>

// Global variable declaration
int globalVar = 10;

void func()
{
    // Static variable declaration
    static int staticVar = 0;
    // Local variable declaration
    int localVar = 0;

    printf("Before incrementing: staticVar = %d, localVar = %d, globalVar = %d\n", staticVar, localVar, globalVar);

    // Incrementing variables
    staticVar++;
    localVar++;
    globalVar++;

    printf("After incrementing: staticVar = %d, localVar = %d, globalVar = %d\n", staticVar, localVar, globalVar);
}

int main()
{
    func();
    func();
    func();
    return 0;
}