#include <stdio.h>

int main ()
{
    int a;
    char c;
    float f;
    scanf("%d%% %c %f%%", &a, &c, &f);
    printf("%d%% %c %0.1f%%", a, c, f);
    return 0;
}