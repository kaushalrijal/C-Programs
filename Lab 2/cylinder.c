#include <stdio.h>
#define PI 3.141592

int main()
{
    float radius, height, area, volume;

    printf("Enter the values of radius and height: ");
    scanf("%f%f", &radius, &height);

    area = 2 * PI * radius * height;
    volume = PI * radius * radius * height;

    printf("Area = %f\tVolume = %f", area, volume);

    return 0;
}