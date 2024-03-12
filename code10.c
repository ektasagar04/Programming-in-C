#include<stdio.h>
//calculate perimeter of rectangle
int main()
{
    int a;
    int b;
    printf("enter length:\n");
    scanf("%d", &a);
    printf("enter breadth:\n");
    scanf("%d", &b);
    printf("perimeter of rectangle : %d \n", 2*(a+b));
}