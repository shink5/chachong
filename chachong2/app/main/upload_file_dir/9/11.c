#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    printf("Number:190210506\nsubject NO.2-program NO.2\n\n");


    double a,b,c,L,S;
    printf("�����������ε����߳����ÿո������\n");
    scanf("%lf %lf %lf",&a,&b,&c);

    if((a+b>c)&&(b+a>c)&&(a+c>b))
    {
        L=1.0/2*(a+b+c);
        S = sqrt(L*(L-a)*(L-b)*(L-c));
        printf("������������ܹ��������Σ������Ϊ��%7.3f��\n",S);/*Ϊ�������������룬�ҽ��������3λС��*/
    }
    else
    {
        printf("����������߲��ܹ��������Ρ�\n");
    }

    getchar();
    getchar();
    return 0;
}
