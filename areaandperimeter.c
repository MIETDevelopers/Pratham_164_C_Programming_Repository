#include<stdio.h>
int main(){
    float side, length, breadth;
    printf("Enter side of the square\n");
    scanf("%f", &side);

    printf("Enter length of the rectangle\n");
    scanf("%f", &length);

    printf("Enter breadth of the rectangle\n");
    scanf("%f", &breadth);

    printf("Area of square: %.2f\n", side * side);
    printf("Perimeter of square: %.2f\n", 4 * side);

    printf("Area of rectangle: %.2f\n", length * breadth);
    printf("Perimeter of rectangle: %.2f\n", 2 * (length + breadth));

    return 0; 
}