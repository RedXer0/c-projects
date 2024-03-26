#include <stdio.h>

int main(){

    int ascii[25] ={}, x = 0,y;
    char usr_input[25];

    fgets(usr_input, sizeof(usr_input), stdin);
    while(usr_input[x] != '\0') {
        ascii[x] = usr_input[x]; x++;
        }
    for(y = 0; y < x - 1; y++) 
    printf("%d \t", ascii[y]);

    return 0;
}