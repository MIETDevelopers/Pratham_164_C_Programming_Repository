#include<stdio.h>
int main(){
    int n1=0, n2=1, n3, count, num;//Declearing variables.
    printf("Enter the number of terms to be printed\n");
    scanf("%d", &num);//Storing the total numbers of terms to be printed in valrable num.
    printf("\n%d \n%d\n",n1, n2);

    for(count = 3; count <= num; count++)//Adding forloop.
    {
        n3 = n1 + n2;
        printf("%d\n", n3);

        n1 = n2;//Here value of n2 will be assigned to n1.
        n2 = n3;//Here value of n3 will be assigned to n2.  
    }
    return 0;//Return statement.    
}