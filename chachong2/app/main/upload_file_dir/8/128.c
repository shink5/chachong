#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    float a,b,c,p,s;
    printf("��������������\n");
    scanf("%f%f%f",&a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        printf("�����������Գ䵱�����ε�����\n");
        p=(a+b+c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("��������ε����Ϊ%f\n",s);
    }
    else
        printf("�����������ܹ���������\n");
    return 0;
}
