#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Number:190210613\nsubject No.2 program No.2\n");
    int a,b,c,p;
    double s;
    printf("�����������������߳���");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
        p=(a+b+c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("���������Ϊ%f",s);
    }else{
        printf("����������߲��ܹ���������");
    }
    printf("\n");
    system("pause");
    return 0;
}
