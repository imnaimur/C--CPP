#include <stdio.h>
int main()
{
int a=5;
float b=19.43f;
float c = a + b;
printf("%d+%f=%f\n",a,b,a+b);
printf("%d-%f=%f\n",a,b,a-b);
printf("%d*%f=%f\n",a,b,a*b);
printf("%d/%f=%f\n",a,b,a/b);
printf("a=%d b=%f\n",a,b);
printf("%f\n",c);
return 0;
}