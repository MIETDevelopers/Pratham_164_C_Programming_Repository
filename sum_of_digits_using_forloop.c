#include <stdio.h>
int main()
{
  int num, r, sum=0;

  printf("Enter a number\n");
  scanf("%d", &num);//It will store the number in num variable. 

  while(num > 0){//Condition - Number should be greater than 0.
  	
     r = num % 10;
     sum = sum + r;//Adding remainder to sum variable.
     num = num / 10;//It will remove the last digit of the number.  
  }

  printf("Sum of the digits = %d\n", sum);//It will print the sum.

  return 0;
}