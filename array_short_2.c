#include <stdio.h>
int main(){
    int num, temp, index=0;
    scanf("%d", &num);
    int ara2[num];
    int ara1[num];
    for(int i=0; i<num; i++){
        scanf("%d", &ara1[i]);
    }
    for(int i = 0; i<num; i++){
        for(int j = i+1; j<num; j++){
            if(ara1[i] > ara1[j]){
                temp = ara1[i];
                ara1[i]= ara1[j];
                ara1[j]= temp;
            }
        }
    }


    for(int i =0; i<num;i++){
        if( (num-1)==i){
            printf("%d\n", ara1[i]);
        }else{
            printf("%d ", ara1[i]);
        }

    }

    for(int i = 0; i<num; i++){
        int found =0;
        for(int j =0; j<num; j++){
            if(ara1[i] == ara2[j]){
               found = 1;
            }
        }
        if(found ==0){
            ara2[index]= ara1[i];
            index++;
        }
    }








    printf("-----------------\n");
    for(int i =0; i<num;i++){
        if( (num-1)==i){
            printf("%d\n", ara2[i]);
        }else{
            printf("%d ", ara2[i]);
        }

    }


    return 0;
}

