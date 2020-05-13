#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    puts("Enter first value");
    scanf("%d", &a);
    puts("Enter second value");
    scanf("%d", &b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    printf("the sum of %d",a);
    printf(" and %d",b);
    printf(" is %d",c);
    puts(" ");
    printf("difference between %d",a);
    printf(" and %d",b);
    printf(" is %d",d);
    puts(" ");
    printf("multiplication of %d",a);
    printf(" and %d",b);
    printf(" is %d",e);
    puts(" ");
    printf("division of %d",a);
    printf(" and %d",b);
    printf(" is %d",f);
    puts(" ");
    printf("modulus of %d",a);
    printf(" and %d",b);
    printf(" is %d",g);
    return 0;
}
