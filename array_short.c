#include <stdio.h>

int main(){
    int num=15;
    //scanf("%d", &num);
    /*
    int ara1[num], ara2[num];
    for(int i=0; i<num; i++){
        scanf("%d", &ara1[i]);
    }

    */
    int ara1[15] = {23,1,354,22,5,654,89,56,87,45,32,89,45,65,897};//0
    //            {1,23,354,22,5,654}1

    //            {1,5,354,22,23,654}2

    //            {1,5,22,354,23,654}3

     //            {1,5,22,23,354,654}4

     //            {1,5,22,23,354,654}5

    //int ara1[7] = {23,1,354,22,5,654,89};

    int min = ara1[0];
    //int start=0;
    int position=0;
    int temp;
    int index;

    for(int i = 0; i<(num-1); i++){
        for(int j = position; j<num; j++){
            if(ara1[j]<min){
                min = ara1[j];
                index = j;
            }

        }
        temp = ara1[i];
        ara1[i] = min;
        ara1[index] = temp;
        position++;
        int start= i+1;
        min = ara1[start];

        for(int i =0; i<num; i++){
            printf("%d ", ara1[i]);
        }
        printf("\n");

    }
    /*


    for(int i = 0; i<num; i++){
      printf("%d ", ara1[i] );
    }

    */


}
