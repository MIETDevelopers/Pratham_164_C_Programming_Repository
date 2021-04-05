#include<stdio.h>
int main(){
	int num;
	printf("Enter a number\n");//User will enter a number.
	scanf("%d", &num);//Entered number will be stored in variable num

	if(num % 2 == 0)
		printf("%d is a even number\n",num);

	else
		printf("%d is a odd number\n",num);

	return 0;
}