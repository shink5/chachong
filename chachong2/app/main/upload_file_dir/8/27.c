#include <stdio.h>
#include <stdlib.h>

#define pi1 3.1415926

int main()
{
    printf("Number:190210516 \n");
    printf("subject No.2 - program No.1\n\n");

    const double pi2 = 3.1415926;
    double r = 0;

    printf("��������İ뾶:");
    scanf("%lf", &r);
    printf("��ı������: %f\n", 4 * pi1 * r * r);
    printf("��������: %f\n", 4.0 * pi2 * r * r * r / 3.0);
    return 0;
}
