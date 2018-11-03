#include <stdio.h>

int main(){
    int num, num2;
    scanf("%d", &num);
    int ara[num];
    for(int i = 0; i<num; i++){
        scanf("%d", &ara[i]);
    }

    scanf("%d", &num2);
    int count=0;
    for(int i=0; i<num; i++){
        if(ara[i]%num2==0){
          count++;
        }
    }
    if(count>0){
        printf("Divisible number = %d\n", count);
    }else{
        printf("No divisible number.\n", count);
    }

    return 0;
}
