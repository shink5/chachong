#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,p,S;
    printf("��ӭʹ�ñ����\n����������������֮���ÿո�����");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a+b>=c&&b+c>=a&&c+a>=b)
    {
      p=(a+b+c)/2;
      S=sqrt(p*(p-a)*(p-b)*(p-c));
      printf("S=%lf\n",S);
    }
    else
      printf("�Բ���������������β�����\n");
    return 0;
}
