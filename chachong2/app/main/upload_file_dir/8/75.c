#include <stdio.h>
#include <stdlib.h>
#define PI1 3.1415926
int main()
{
    const double PI2=3.1415926;
    double r;
    printf("Number: 190210628\n");
    printf("subject No.2 - program No.1\n\n");
    printf("Please input r:");
    scanf("%lf",&r);
    printf("������=%lf\n",4*r*r*r*PI1/3);
    printf("��ı����=%lf\n",4*PI2*r*r);
    return 0;
    }
