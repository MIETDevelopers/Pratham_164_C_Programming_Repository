#include<stdio.h>
int main(){
    char operator;
    float a, b;
    printf("Enter an operator (+, -, *, /):");
    scanf("%c", &operator); 
    printf("Enter two operands:");
    scanf("%f %f",&a, &b); 
    switch(operator)
    {
        case '+':
            printf("%f + %f = %f",a, b, a+b); 
            break;

        case '-':
            printf("%f - %f = %f",a, b, a-b); 
            break;

        case '*':
            printf("%f * %f = %f",a, b, a*b);
            break;

        case '/':
            printf("%f / %f = %f",a, b, a/b); 
            break;
    printf("Error encountered by the input values");
    }
    return 0;
}