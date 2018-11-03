#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int ara[num];
    for(int i=0; i<num; i++){
        scanf("%d", &ara[i]);
    }
    for(int i = 0; i<num; i++){
        if((i % 2) == 1){
            printf("%d\n", ara[i]);
        }

    }

    return 0;
}
