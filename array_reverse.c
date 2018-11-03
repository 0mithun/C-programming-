#include <stdio.h>

int main(){
    int number,i,j;
    scanf("%d", &number);
    int ara[number];

    for(int i=0; i<number; i++){
        scanf("%d", &ara[i]);
    }

    j=number-1;
    i=0;
    for(i;i<j;i++,j--){
        int temp = ara[i];
        ara[i] = ara[j];
        ara[j] = temp;

    }
    for(int i =0; i<number;i++){
        if(number!=i){
            printf("%d ", ara[i]);
        }else{
            printf("%d", ara[i]);
        }

    }

    return 0;
}
