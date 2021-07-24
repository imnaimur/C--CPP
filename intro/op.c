#include <stdio.h>
int main()
{
    int a = 5;
    float b = 3.2f;
    float c = a + b;
    printf("%d+%f=%f\n", a, b, a + b);
    printf("%d-%f=%f\n", a, b, a - b);
    printf("%d*%f=%f\n", a, b, a * b);
    printf("%d/%f=%f\n", a, b, a / b);
    printf("a=%d b=%f\n", a, b);
    return 0;
}
