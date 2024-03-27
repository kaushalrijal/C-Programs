#include <stdio.h>

int main()
{
    int num1, num2, i, HCF, LCM;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find HCF
    for (i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            HCF = i;
        }
    }

    // Find LCM
    LCM = (num1 * num2) / HCF;

    printf("HCF: %d\n", HCF);
    printf("LCM: %d\n", LCM);

    return 0;
}