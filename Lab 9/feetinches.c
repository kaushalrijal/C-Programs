#include <stdio.h>

struct distance
{
    int feet, inches;
};

struct distance add(struct distance, struct distance);

int main()
{
    struct distance d1, d2, sum;
    printf("Enter the feet and inches of distance 1: ");
    scanf("%d%d", &d1.feet, &d1.inches);

    printf("Enter the feet and inches of distance 2: ");
    scanf("%d%d", &d2.feet, &d2.inches);

    sum = add(d1, d2);

    printf("The sum of the given distances is %d feet and %d inches.", sum.feet, sum.inches);

    return 0;
}

struct distance add(struct distance d1, struct distance d2)
{
    struct distance d;
    int k = 0;
    d.inches = d1.inches + d2.inches;
    if (d.inches >= 12)
    {
        d.feet = d.inches / 12 + d1.feet + d2.feet;
        d.inches = d.inches % 12;
        return d;
    }
    d.feet = d1.feet + d2.feet;
    return d;
}