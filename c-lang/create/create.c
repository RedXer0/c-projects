#include <stdio.h>

int main(){

    FILE *ftpr;
    ftpr = fopen("Filename.txt", "w");
    fclose(ftpr);
    return 0;
}