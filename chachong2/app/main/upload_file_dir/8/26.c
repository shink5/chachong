#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,s,area;
    printf("���������ε�����\n a,b,c:");
    scanf("%f,%f,%f",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
    {
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("�����ε����Ϊ%f\n",area);
    }
    else
    {
        printf("�޷�����������\n");
    }
    return(0);
}
