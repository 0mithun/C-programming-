#include <stdio.h>

int main(){
    int num, start, end, temp;
    scanf("%d", &num);
    int ara[num];
    for(int i=0;i<num; i++){
        scanf("%d", &ara[i]);
    }
    scanf("%d", &start);
    scanf("%d", &end);

    int j= num-1;
    for(start; start<end; start++, end--){
        temp = ara[start];
        ara[start] = ara[end];
        ara[end] = temp;
    }
    for(int i = 0; i<num; i++){
        if( (i+1) ==num ){
            printf("%d\n", ara[i]);
        }else{
            printf("%d ", ara[i]);
        }
    }

    return 0;
}
