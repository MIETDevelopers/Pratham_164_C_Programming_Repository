//Author - Pratham Tagotra.
#include <stdio.h>
int main() {
    char c;//Declearing a variable c of character data type.
    int lowercasevowel, uppercasevowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    
    lowercasevowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    uppercasevowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lowercasevowel || uppercasevowel){ //If alphabet entered by user matches with the alphabets in lowercase or uppercase it will print it is vowel. 
        printf("%c is a vowel\n", c);
    }
    else{
        printf("%c is a consonant\n", c);
    }
    return 0;
}
