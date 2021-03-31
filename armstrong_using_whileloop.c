#include<stdio.h>
int main(){
	int num,remainder,cube,sum;
	printf("Enter a number\n");
	scanf("%d",&num);

	while(num > 0){

		remainder = num % 10;//It will give us the last digit of our number.
		cube = remainder * remainder * remainder;//We will get the cub of our last digit.
		sum = sum + cube;
		num = num / 10;
	}
	if(sum==num)
		printf("%d is a armstrong number\n",num);
	else
		printf("%d is not a armstrong number\n",num);

	return 0;
}