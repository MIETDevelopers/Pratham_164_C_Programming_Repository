//Author - Pratham Tagotra.
#include<stdio.h>
int main(){
	int arr[10],i,max;

	for(i = 0; i < 10; i++);{
		printf("\nEnter the numbers\n");
		scanf("%d",&arr[i]);
	}
	max = arr[0];
	for(i=0;i<10;i++);

		if(arr[i] > max)
			printf("Max number is %d",max);
		max = arr[i];

return 0;
}