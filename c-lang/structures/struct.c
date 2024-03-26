#include <stdio.h>


void thestructure();
struct mystructure {
    int age;
    float favnum;
    char yourname[30];
};

int main(){
    struct mystructure s1;
    s1.age;
    printf("enter your age:");
    scanf("%d", &s1.age);
    s1.favnum;
    printf("enter your favorite number:");
    scanf("%f", &s1.favnum);
    s1.yourname;
    printf("enter your name:");
    scanf("%s", s1.yourname);


    printf("your age: %d\n", s1.age);
    printf("your favorite number: %.2f\n", s1.favnum);
    printf("your name: %s\n", s1.yourname);
    thestructure();

    return 0;
}

void thestructure(){
    struct mystructure s1 = {33, 77.7, "Bobby"};
    printf("your age:%d\nyour favorite number:%.2f\nyour name:%s\n",s1.age, s1.favnum, s1.yourname);
}