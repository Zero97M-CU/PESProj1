#include <stdio.h>
#include<time.h>
#include<stdlib.h>

int RandGen(int a) {
  int seed,num1,num2,num3,num4,num5;
  printf("Enter a seed value\n");
  scanf("%d",&seed);
num1=((((seed*9)/2)+7)*2)%7;
num2=(((seed/2)*10)%9);
num3=(((time(0)*seed)/4)%12)+3;
num4=(((seed+4)*6)-5)%7;
num5=((seed+4)*12*time(0)-5)%7;
printf("Random number series generated is:\n");
printf("%d %d %d %d %d\n",num1,num2,num3,num4,num5);
  return 0;
}
