#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main()
{
    float r,V,S;
    printf("���� ���� 190210622\n");
    printf("������뾶��\n");
    scanf("%f",&r);
    V=(4/3)*PI*r*r*r;
    S=4*PI*r*r;
    printf("���Ϊ%f,�����Ϊ%f",V,S);
    return 0;
}
