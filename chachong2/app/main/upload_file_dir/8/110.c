#include <stdio.h>
#include<math.h>
int main()
{
    printf("Number:190210618\n");
    printf("subject No.2 - program No.3\n");
    double a,b,c,s,h;
    printf("�����������ε������߳����м��ÿո�ָ�����");
    scanf("%lf %lf %lf",&a,&b,&c);
    if((a+b)>c && (a+c)>b && (c+b)>a)
    {
        s=(a+b+c)/2;
        h=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("%lf",h);
    }
    else printf("����������޷�����������");
    return 0;
}
