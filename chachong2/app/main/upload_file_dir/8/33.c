#include <stdio.h>
#include <math.h>
main()
{
    printf("Number:190210520\nsubject No.2---- project N0.2\n\n");
    double x,y,z,p;
    printf("��������������:");
    scanf("%lf %lf %lf",&x,&y,&z);
    if ((x+y)>z&&(x+z)>y&&(y+z)>x){
        p =(x+y+z)/2.0;
        printf("���Թ��������Σ������ε����Ϊ:%f",sqrt(p*(p-x)*(p-y)*(p-z)));
    }
    else{
        printf("�޷�����������!");
    }
}

