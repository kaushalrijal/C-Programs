#include <stdio.h>
#include <math.h>
int main()
{
    int n, temp, sum = 0, rem, power = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        power++;
        temp /= 10;
    }
    temp = n;

    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + ceil(pow(rem, power));
        temp /= 10;
    }
    if (n == sum)
    {
        printf("%d is Armstrong number", n);
    }
    else
    {
        printf("%d is not Armstrong number", n);
    }
    return 0;
}