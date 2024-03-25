#include<stdio.h>
#include<math.h>
int main()
{
    int a=10, b=20;
    printf("%d \n", a ^ b);
    printf("%d \n", a & b);
    printf("%d \n", a | b);
    printf("%d \n", ~ b);
    printf("%d \n", a += b);
    printf("%d \n", a |= b);
    return 0;
}
