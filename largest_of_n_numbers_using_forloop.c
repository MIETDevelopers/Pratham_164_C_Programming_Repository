//By Pratham Tagotra
#include<stdio.h>
int main(){
	int n,i,large=0,element;
	printf("Enter number of elements\n");
	scanf("%d",n);//It will store the total number of elements.

	printf("Enter %d numbers", n);//It will say user to enter the total numbers as per the limit set by the user.

	for(i=1; i<=n; i++)
		scanf("%d",&element);
	if(element > large){
		large = element;//If element entered is greater than large it will be then storen in large
	}
	printf("The largst element is %d",large);

	return 0;
}