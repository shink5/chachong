#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926

main()
{
   printf("Number:190210619\n");
   printf("subject No.1 - program No.2\n");
   double r;
   printf("请输入半径:");
   scanf("%lf",&r);
   printf("体积:%lf\n",(4/3)*PI*r*r*r);
   printf("表面积:%lf\n",4*PI*r*r);
}
