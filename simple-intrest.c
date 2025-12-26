#include<stdio.h>
int main(){
    float principal, rate, time, simple_intrest;
    printf("Enter principal amount: " );
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");    
    scanf("%f", &time);
    simple_intrest = (principal * rate * time) / 100;
    printf("Simple Interest is: %.2f\n", simple_intrest);
    return 0;
}