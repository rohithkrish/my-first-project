#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;

    a=5;
    b=10;
    c=mul(a,b);
    printf("Multiplication of %d and %d is %d",a,b,c);
}
mul(x,y)
int p,x,y;
{
    p=x*y;
    return(p);
}
