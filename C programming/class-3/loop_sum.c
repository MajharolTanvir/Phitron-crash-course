#include <stdio.h>

int main () {
    int sum = 0;
    int i;
    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
        printf("%d\n", sum);
}