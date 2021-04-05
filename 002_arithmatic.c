//Author - Pratham Tagotra.
#include<stdio.h>
int main(){
    char operator;
    float a, b;
    printf("Enter an operator (+, -, *, /):");//User will enter a operator.
    scanf("%c", &operator);//Enterd operator will be scanned. 
    printf("Enter two operands:");//User will enter to operands.
    scanf("%f %f",&a, &b);//Operands will be scanned. 
    switch(operator)//Each case will be checked and if matched answer will be printed. 
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
    return 0;//Return statement.
}