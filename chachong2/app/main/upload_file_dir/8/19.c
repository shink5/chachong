#include <stdio.h>
#define Pi 3.1415926
int main()
{
 printf("Number:190210511\nsubject No.2-program No.1\n");
  double r,v,s;
  printf("������뾶��ֵ��");
  scanf("%lf",&r);
  s=4*Pi*r*r;
  v=Pi*4/3*r*r*r;
  printf("���ú궨�������ı�����ǣ�%lf\n���ú궨�������������:%lf\n",s,v);
  const double PI = 3.1415926;
  double R,S,V;
  printf("������뾶��ֵ��");
  scanf("%lf",&R);
  S=4*PI*R*R;
  V=4/3*PI*R*R*R;
  printf("����const������������Բ�ı�����ǣ�%lf\n����const������������Բ�������:%lf\n",S,V);
}
