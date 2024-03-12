#include<stdio.h>
#include<math.h>
//calculate simple interest and compound interest
int main()
{
    float p, r, t, si, ci;
    printf("enter principal amount:\n");
    scanf("%f",&p);
    printf("enter rate in percent:\n");
    scanf("%f",&r);
    printf("enter time in year:\n");
    scanf("%f",&t);
    printf("simple interest:%f\n",si=(p*r*t)/100);
    printf("compound interest:%f\n",ci=(p*(pow(1+r/100,t))));
    return 0;
}

