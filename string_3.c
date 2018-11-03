#include <stdio.h>

int main(){
    int char_value(char a){
        if(a >= 48 && a <= 57){
            return 1;
        }else{
            return 0;
        }
    }
    char c = getchar();
    printf("%d", char_value(c));
    return 0;
}
