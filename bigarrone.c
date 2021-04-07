#include<stdio.h>
int main(){

    int marks[10], i;

    for( i=0; i < 10; i++){

        printf("Enter the marks of student no %d: ", i+1);\
        scanf("%d", marks[i]);

        for( i = 0; i < 10; i++){
            
            printf("The marks of student no %d is: %d", i+1, marks[i]);
        }
    }
    return 0; 
}