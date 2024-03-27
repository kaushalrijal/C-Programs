#include <stdio.h>

struct employee
{
    int empno;
    char name[50];
    int salary;
    char address[100];
};

void Input(struct employee *);
void Display(struct employee *);
void Updatesal(struct employee *);

int main()
{
    int c;
    struct employee emp;

    Input(&emp);

    while (1)
    {
        printf("\n-----Employee Record-----\n1) Input\n2) Display\n3) Update Salary\n4) Exit\nPlease choose an option: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            Input(&emp);
            break;
        case 2:
            Display(&emp);
            break;
        case 3:
            Updatesal(&emp);
            break;
        case 4:
            return 0;
        default:
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}

void Input(struct employee *emp)
{
    printf("Enter employee number: ");
    scanf("%d", &emp->empno);

    printf("Enter employee name: ");
    scanf(" %s", &emp->name);

    printf("Enter employee salary: ");
    scanf("%d", &emp->salary);

    printf("Enter employee adress: ");
    scanf(" %s", &emp->address);
}
void Display(struct employee *emp)
{
    printf("Employee No.: %d\nEmployee Name: %s\nEmployee Salary: %d\nEmployee Address: %s", emp->empno, emp->name, emp->salary, emp->address);
}
void Updatesal(struct employee *emp)
{
    printf("Enter the updated salary: ");
    scanf("%d", &emp->salary);
}