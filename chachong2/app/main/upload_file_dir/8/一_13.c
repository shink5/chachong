    #include<stdio.h>
    #define a 3.14159//��define����PI��Ϊ�˱����������֣�ʹ��a
    int main()
    {
        const double PI=3.14159;
        double r;
        double b=4.0/3.0;//���������ʽ�е�ǰ�벿��
        printf("Number:180210129\n");
        printf("Subject.2.program.1\n\n");
        printf("Please input r:");
        scanf("%lf",&r);
        printf("Volume in const:%f\n",b*PI*r*r*r);
        printf("Volume in define:%f\n",b*a*r*r*r);
        printf("area in const:%f\n",4*PI*r*r);
        printf("area in define:%f\n",4*a*r*r);
        return 0;
    }

