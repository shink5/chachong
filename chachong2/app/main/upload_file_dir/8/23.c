#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("please input a,b,c:");
    float p,s;
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    {
        p=(a+b+c)/2;
        s=(float)sqrt(p*(p-a)*(p-b)*(p-c));
        printf("���Թ���һ��������\narea=%f\n",s);
    }
    else
    {
        printf("���ɹ���һ��������");
    }
}
