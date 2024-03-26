#include <stdio.h>

int main(){
    FILE *fptr;

    fptr = fopen("create.c", "r");

    char filedat[300];

    if(fptr != NULL){
        while(fgets(filedat, 300, fptr)){
            printf("%s", filedat);
        }
    } else {
        printf("Can't open a file that doesn't exist\n");
    }

    fclose(fptr);
    return 0;
}