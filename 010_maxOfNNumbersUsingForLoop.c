//Author - Pratham Tagotra.
#include <stdio.h>
int main()
{
  int i,num,n,large=0;

  printf("How many numbers: ");
  scanf("%d",&n); 
  
  for(i=0; i<n; i++)
  {
   
    printf("\nEnter number %d: ",i+1);
    scanf("%d",&num);
    if(num>large)
    large=num;
  }

  printf("\nThe Largest number is %d",large); 
  return 0;
}