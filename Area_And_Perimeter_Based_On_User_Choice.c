#include<stdio.h>
#define pi 3.14
int main(){

	float length, breadth, side, radius, a_circle, a_rect, a_sq, p_circle, p_rect, p_sq;
	int choice;

	printf("Area and Perimeter of\n\n");
	printf("1 Circle\n");
	printf("2 Rectangle\n");
	printf("3 Square\n");
	printf("Choose from given options\n\n");
	scanf("%d", &choice);

	switch(choice){

		case 1: printf("Enter the radius of the circle\n");
				scanf("%f", &radius);

				a_circl = pi * radius * radius;
				p_circle = 2 * pi * radius;

				printf("Area of circle is %f", a_circle);
				printf("Perimeter of circle is %f", p_circle);

				break;

		case 2: printf("Enter the length and breadth of the rectangle\n");
				scanf("%f%f", &length, &breadth);

				a_rect = length * breadth;
				p_rect = 2 * length * breadth;

				printf("Area of rectangle %f\n Perimeter of rectangle %f", a_rect, p_rect);
				break;

		case 3: printf("Enter th side of the square\n");
				scanf("%f");

				a_sq = side * side;
				p_sq = 4 * side;

				printf("Area of square is %f \n Perimeter of square is %f", a_sq, p_sq);
				break;

		default:printf("Wrong choice entered\n");
				break;

	}			

	return 0;	
}