#include <stdio.h>
#include <stdlib.h>

int main()
{
    double p;
    double a,b,c;
    a:printf("������߳�a,b,c:");
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a>=b+c || b>=a+c || c>=a+b)
    {
        printf("�Բ���������ı߳����ܹ���������\n");
        goto a;
    }
    else
    {
        p=(a+b+c)/2;
        printf("S=%lf",sqrt(p*(p-a)*(p-b)*(p-c)));
    }
    return 0;

}
