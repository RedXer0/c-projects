#include <stdio.h>
#include<stdlib.h>

int main(){
    int usr_input;
    if(1 != scanf("%d", &usr_input)){
        exit(3);
    }
    printf("%d: \t%c", usr_input, usr_input);

    return 0;
}