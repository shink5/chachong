#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    printf("Number:190210612\nsubject No.1 - program No.1\n\n");
    float a,b,c,p,s;
	printf("�����������ε����߳���");
	scanf("%f%*c%f%*c%f", &a, &b, &c);
    if( a+b > c && b+c > a && a+c > b)
    {
        p = (a+b+c)/2;
        s = sqrt(p * (p-a) * (p-b) * (p-c));
        printf("�����ε����Ϊ��%f",s);
    }
    else
        printf("�ⲻ��һ�������Σ�");
    return 0;
}
