#include <stdio.h>

int main(){

    FILE *fp;
    char filename[] = "new_file.txt";

    fp =fopen(filename, "w");
    fprintf(fp, "This is sample text\n");
    fclose(fp);
    fopen(filename, "a");
    fprintf(fp,"Second text here!\n");
    fclose(fp);

    fopen(filename, "a");
    fprintf(fp, "Third text here!\n");
    fclose(fp);


    return 0;
}
