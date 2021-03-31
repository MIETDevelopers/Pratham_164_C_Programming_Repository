#include<stdio.h>
int main(){
    // 97-122 = a-z, Ascii values.
    char ch;
    printf("Enter the character\n");
    scanf("%d", ch);

    if("ch >= 97 && ch <= 122"){
    printf("Character entered is lowercase\n");
    }
    else{
        printf("Character entered is not of lowercase value\n");
    }
    return 0;
}