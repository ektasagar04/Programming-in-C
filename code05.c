#include<stdio.h>
//area of square
int main()
{
    int side;
    printf("enter side:\n");
    scanf("%d", &side);
    printf("area of square is :%d\n", side*side);

//area of circle
    float radius;
    printf("enter radius:\n");
    scanf("%f", &radius);
    printf("area of circle: %f", 3.14 * radius * radius);
    return 0;
}