#include <stdio.h>

struct mystructure {
    int age;
    float favnum;
};

int main(){
    struct mystructure s1;
    s1.age;
    printf("enter your age:");
    scanf("%d", &s1.age);
    s1.favnum;
    printf("enter your favorite number:");
    scanf("%f", &s1.favnum);

    printf("your age: %d\n", s1.age);
    printf("your favorite number: %.2f\n", s1.favnum);

    return 0;

}