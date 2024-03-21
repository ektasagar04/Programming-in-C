#include<stdio.h>
int main()
// area and circumference of circle
{
    float radius,area,circumference;
    printf("Enter radius of circle:\n");
    scanf("%f", &radius);
    printf("Area of circle: %f\n", 3.14*radius*radius);
    printf("Circumference of circle: %f", 2*3.14*radius);
    return 0;
}