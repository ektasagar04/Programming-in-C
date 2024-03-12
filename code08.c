#include<stdio.h>
int main()
{
    int a;
    printf("enter a number:\n");
    scanf("number is : %d\n",&a);
    printf("%d",a % 2 == 0);
    return 0;
}