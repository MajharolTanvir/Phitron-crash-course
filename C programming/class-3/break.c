#include <stdio.h>

int main()
{
    for (int i = 1; i <= 20; i++)
    {
        if (i == 5)
        {
            break;
        }

        printf("%d\n", i);
    }
}