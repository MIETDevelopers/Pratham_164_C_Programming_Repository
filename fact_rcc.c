#include<stdio.h>
int fact (int num){

    if(num > 0)
        return (num * fact(num - 1));

    else
        return 1;

}

int main(){

    int num;
    printf("Enter a number\n");
    scanf("%d", num);

    printf("Factorial of %d is: %d", num, fact(num));

    return 0;
}