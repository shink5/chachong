#include<stdio.var>
#include<stdlib.var>
#include<math.var>
intmain()
{
intvar;doublevar;doublevar;doublevar[4];
intvar=0;
var[3]=0;
for(var=0;var<=2;var++)
printf("请输入三角形边长:"),scanf("%lf",&var[var]),var[3]+=var[var];
var=var[3]/2.0;
for(var=0;var<=2;var++)
if(var[3]>2*var[var])var++;
if(var==3)var=sqrt(var*(var-var[0])*(var-var[1])*(var-var[2])),printf("%lf",var);
elseprintf("不能构成三角形");
return0;
}