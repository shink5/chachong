#include <stdio.h>
#include <stdlib.h>
#include<math.h>

main()
{
    printf("Number:190210619\n");
    printf("subject No.1 - program No.2\n");
    double x,y,z,p;
    printf("�����������߳�x,y,z:");
    scanf("%lf,%lf,%lf",&x,&y,&z);
    if(x+y>z&&x+z>y&&y+z>x)
    {
        p=(x+y+z)/2;
        printf("�����������%lf",sqrt(p*(p-x)*(p-y)*(p-z)));
    }
    else
    {
        printf("����xyz�����������Σ�");
    }
}
