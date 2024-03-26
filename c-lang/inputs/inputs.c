#include <stdio.h>

int memory_address(){
    int mynum = 344;

    printf("%p\n", &mynum);
}

int stringinputs(){
    char usrinpt[30];
    printf("enter a string:\n");
    fgets(usrinpt, sizeof(usrinpt), stdin);
    printf("you typed in: %s\n", usrinpt);
}

int main(){
    stringinputs();
    printf("_");
    memory_address();

    int usernum;

    printf("enter a number:\n");
    scanf("%d", &usernum);
    printf("you typed in: %d\n", usernum);
    return 0;
}