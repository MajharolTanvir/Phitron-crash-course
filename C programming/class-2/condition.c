#include <stdio.h>

int main () {
    int tk;
    scanf("%d", &tk);

    if (tk >= 200)
    {
        printf("Birani khabo");
    }
    else if(tk >= 100){
        printf("Burger khabo");
    }
    else{
        printf("Kichui khabo nah");
    }
    return 0;
}