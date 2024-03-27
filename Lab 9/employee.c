#include <stdio.h>

struct employee
{
    int number;
    char name[50];
    float salary;
    char address[100];
};

int main()
{
    struct employee emp1;
    printf("Enter the number of the employee: ");
    scanf("%d", &emp1.number);
    printf("Enter the name of the employee: ");
    scanf("%s", &emp1.name);
    printf("Enter the salary of the employee: ");
    scanf("%f", &emp1.salary);
    printf("Enter the address of the employee: ");
    scanf("%s", &emp1.address);

    printf("Number: %d\n", emp1.number);
    printf("Name: %s\n", emp1.name);
    printf("Salary: %f\n", emp1.salary);
    printf("Address: %s", emp1.address);
    return 0;
}