#include<stdio.h>
int main(){

    int num, i, n, large =0;

    printf("Total numbers\n");
    scanf("%d", num);

    printf("Enter %d numbers");
    
    for( i = 1; i <= num; i++){
        scanf("%d", n);

        if( n > large)
        large = n;
    }
    printf("Largest number is %d", large);

    return 0;
}