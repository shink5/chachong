#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,s,p;
    RE:printf("�����������ε������ߣ�\n");
    scanf("%f,%f,%f",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
    {
      p=(a+b+c)/2;
      s=sqrt(p*(p-a)*(p-b)*(p-c));
      printf("���������Ϊ:%f\n",s);
    }
    else
    {
       printf("���������д�\n");
       goto RE;
    }

    return 0;
}
