#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c;
    float p;
    printf("���������߳���;");
    scanf("%f %f %f",&a,&b,&c);
    p=(a+b+c)/2;
    if(a+b>c && a+c>b && b+c>a)
    {
        printf("�����ε����=%lf",sqrt(p*(p-a)*(p-b)*(p-c)));
    }
    else
    {
        printf("�����β����� DNMD");
    }
}
