#include <stdio.h>

int main(){
    int num, first, second, temp;
    scanf("%d", &num);
    int ara[num];
    for(int i =0; i<num; i++){
        scanf("%d", &ara[i]);
    }
    scanf("%d", &first);
    scanf("%d", &second);

    temp = ara[first];
    ara[first] = ara[second];
    ara[second] = temp;
    for(int i=0; i<num; i++){
        if((i+1) == num){
            printf("%d\n", ara[i]);
        }else{
            printf("%d ", ara[i]);
        }

    }

    return 0;
}
