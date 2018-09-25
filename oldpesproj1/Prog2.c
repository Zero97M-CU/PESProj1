#include<stdio.h>

int add(int a,int b)
{
int c=a+b;
return c;
}

int main()
{
int a,b,c;
printf("Enter value of a\n");
scanf("%d",&a);
printf("Enter value of b\n");
scanf("%d",&b);
c=add(a,b);
printf("Sum of %d and %d is %d",a,b,c);
return 0;
}



