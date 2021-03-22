#include<stdio.h>
int main(){
    int physics,chemistry,maths;
    float total;
    printf("Enter marks of Physics\n");
    scanf("%d",&physics);

    printf("Enter marks of Chemistry\n");
    scanf("%d",&chemistry);

    printf("Enter marks of Maths\n");
    scanf("%d",&maths);

    total = (physics + chemistry + maths)/3;

    if((total<40) || physics<33 || chemistry<33 || maths<33){
        printf("Your total percentage is %f and you are pass\n",&total);
    }

    else{
        printf("Your total percentage is %f and you are fail\n",&total);
    }

    return 0;
}