#include <stdio.h>
#include <math.h>

int main()
{
    printf("Number:190210519\nprojectNo.2-programNo.2\n");
    double a,b,c,p;
    printf("������3���߳�:a=");
    scanf("%lf",&a);
    printf("b=");
    scanf("%lf",&b);
    printf("c=");
    scanf("%lf",&c);
    if(a+b>c&&a+c>b&&b+c>a){
        p=(a+b+c)/2.0;
        printf("���Թ��������Σ����������Ϊ��%f",sqrt(p*(p-a)*(p-b)*(p-c)));}
    else{
    printf("�޷�����������");
    }
    return 0;
}
