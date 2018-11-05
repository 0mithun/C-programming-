#include <stdio.h>
int main(){
    int i = 0;
    int count = 0;
    char name[20];
    scanf("%s", name);
    while(name[i] !='\0'){
        count++;
        i++;
    }
    printf("%d\n", count);
    return 0;
}
