#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SIZE 10

int data; // To count the number of employees

typedef struct employee
{
    int empno;
    char name[30];
    float salary;
} emp;

void add_record(emp e[])
{
    printf("Enter the empno, ename and salary: ");
    scanf("%d %s %f", &e[data].empno, &e[data].name, &e[data].salary);
    data++;
}
void display_record(emp e[])
{
    int i;
    if (data == 0)
    {
        printf("No records found!");
    }
    else
    {
        for (i = 0; i < data; i++)
        {
            printf("%d\t%s\t%f\n", e[i].empno, e[i].name, e[i].salary);
        }
    }
}
void update_record(emp e[])
{
    int tempno, i;
    printf("Enter the empno whose salary is to be increased: ");
    scanf("%d", &tempno);
    for (i = 0; i < data; i++)
    {
        if (tempno == e[i].empno)
        {
            e[i].salary *= i;
            printf("%s salary is increased.", e[i].name);
            break;
        }
    }
    if (i == data)
        printf("Employee not found");
}

int main()
{
    int choice;
    emp e[SIZE];
    while (1)
    {
        system("cls");
        printf("Employee Management System\n1.Add Employee\n2.Display Record\n3.Update Record\n4.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add_record(e);
            break;
        case 2:
            display_record(e);
            break;
        case 3:
            update_record(e);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Input");
            break;
        }
        getche();
    }
}