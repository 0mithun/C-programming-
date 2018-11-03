#include <stdio.h>

int main(){
    int number, start, end, big_num=0;
    scanf("%d", &number);
    int ara[number];
    for(int i=0; i<number; i++){
        scanf("%d", &ara[i]);
    }
    scanf("%d", &start);
    scanf("%d", &end);
    for(int i = start; i<=end; i++){
        if(ara[i] > big_num){
            big_num = ara[i];
        }
    }

    printf("%d\n", big_num);


    return 0;
}
