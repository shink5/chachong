#include <stdio.h>
#include <stdlib.h>

int main()
{
    const double PI=3.14159;
    float r,V,S;
    printf("���� ���� 190210622\n");
    printf("������뾶��\n");
    scanf("%f",&r);
    V=(4/3)*PI*r*r*r;
    S=4*PI*r*r;
    printf("���Ϊ%f,�����Ϊ%f",V,S);
    return 0;
}
