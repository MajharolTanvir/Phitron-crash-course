#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);

    int sum = a+b;
    printf("%d + %d = %d\n", a, b, sum);

    int sub = a-b;
    printf("%d - %d = %d\n", a, b, sub);

    int mul = a*b;
    printf("%d * %d = %d\n", a, b, mul);

    double div = (double) a / b;
    printf("%d / %d = %.2lf\n", a, b, div);
}