#include <stdio.h>

void character(){
    char mystring[30];

    fgets(mystring, sizeof(mystring), stdin);
    printf("%s\n", mystring);
}

void integers(int num){
    printf("number: %d\n", num);
}

void name_n_age(char yourname[], int yourage){
    printf("Your name is: %s and you're age is: %d\n", yourname, yourage);
}

void parameter(int number[8]){
    for (int i = 0; i < 8; i++){
        printf("%d\n", number[i]);
    }

}

int main(){

    int num = 72;
    int number[8] = {34,99,82,99,66,77,89,33};
    printf("%c\n", num);
    character();
    integers(34);
    integers(65);
    integers(76);
    name_n_age("Anna", 16);
    name_n_age("Jeff", 26);
    name_n_age("Bill", 300);
    parameter(number);

    return 0;
}