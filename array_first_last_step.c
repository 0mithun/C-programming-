#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int ara[num];
    for(int i =0; i<num; i++){
        scanf("%d", &ara[i]);
    }
    int j = num-1;
    for(int i =0; i<j; i++, j--){
        printf("%d\n", ara[i]);
        printf("%d\n", ara[j]);
    }
    return 0;
}
