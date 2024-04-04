#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 5000)
    {
        printf("Going to Cox's bazar.\n");
        
        if (tk >= 10000)
        {
            printf("Going to Khulna.");
        }
    }
    else
    {
        printf("Not going anywhere!");
    }
    return 0;
}