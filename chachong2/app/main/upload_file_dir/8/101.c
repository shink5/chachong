#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,s,p;
    cc: printf("��������������Ϊ�߳���");
    scanf("%f,%f,%f",&a,&b,&c);
    if (a+b>c&&b+c>a&&a+c>b)
    {
        p=(0.5)*(a+b+c);
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("���������=%f\n",s);
    }
    else
    {
      printf("���ܹ��������Σ�����������\n");
      goto cc;
    }
    system("pause");


    return 0;
}
