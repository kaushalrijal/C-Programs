// A program to find the value of cos(x)

#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    float sum = 1;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    // to convert degree into radian
    x = x * (3.14159 / 180);

    for (int i = 1; i <= 10; i++)
    {

        if (i % 2 == 0)
        {
            sum += pow(x, i * 2) / tgamma(i * 2 + 1);
        }
        else
        {
            sum -= pow(x, i * 2) / tgamma(i * 2 + 1);
        }
    }

    printf("The value of cos(%f) is %f", x, sum);

    return 0;
}