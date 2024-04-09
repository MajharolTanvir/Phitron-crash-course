#include <stdio.h>

int main(){
    char x;
    scanf("%c", &x);
    if(x >= 'a' && x <= 'z'){
        int uppercase = x - 32;
        printf("%c", uppercase);
    }
    else{
        int lowercase = x + 32;
        printf("%c", lowercase);
    }
    return 0;
}