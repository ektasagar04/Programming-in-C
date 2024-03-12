#include<stdio.h>
#include<math.h>
int main()
{
    int issunday = 1;
    int issnowing = 1;
    printf("%d\n", issunday && issnowing);

    int ismonday = 1;
    int israining = 1;
    printf("%d\n", ismonday ||  israining);    

    int a ;
    printf("enter a number: \n");
    scanf("%d", &a);
    printf("%d\n", a>9 && a<100);    
return 0;
}