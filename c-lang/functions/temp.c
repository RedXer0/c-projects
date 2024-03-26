#include <stdio.h>

float ToCelsius(float fahrenheit);
float ToKelvin(float fahrenheit);

int main(){
    float usr_input;

    printf("put temp in fahrenheit:\t");
    scanf("%f", &usr_input);

    float celsius = ToCelsius(usr_input);
    float kelvin = ToKelvin(usr_input);

    printf("Fahrenheit: %.2f\n", usr_input);
    printf("Celsius: %.2f\n", celsius);
    printf("Kelvin: %.2f\n", kelvin);
    return 0;
}

float ToCelsius(float fahrenheit){
    return (5.0f / 9.0f) * (fahrenheit - 32.0f);
}

float ToKelvin(float fahrenheit){
    return (5.0f / 9.0f) * (fahrenheit - 32) + 273.15;
}