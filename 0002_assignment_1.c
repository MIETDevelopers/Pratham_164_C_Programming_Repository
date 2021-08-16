//Pratham Tagotra.
//A very straight forward and to the point code for assighment no one.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct shop
{
    char s_name[100];
    int w_price;
    int a_price;
    struct shop *next;
};

void display(struct shop *ptr)
{
    printf("Shops are-> ");
    while (ptr != NULL)
    {
        printf("%s\n", ptr->s_name);
        ptr = ptr->next;
    }
}

void lowestPriceForWallnut(struct shop *ptr)
{
    struct shop* min;
    min=ptr;
    while (ptr != NULL)
    {
        if (min->w_price > ptr->w_price)
        {
            min->w_price = ptr->w_price;
            min=ptr;
        }
        ptr = ptr->next;
    }
    printf("Cheapest wallnuts are at %d\n", min->w_price);
    printf("Shop is %s\n",min->s_name);
}

int main()
{
    struct shop *head = (struct shop *)malloc(sizeof(struct shop));
    struct shop *s2 = (struct shop *)malloc(sizeof(struct shop));
    struct shop *s3 = (struct shop *)malloc(sizeof(struct shop));
    struct shop *s4 = (struct shop *)malloc(sizeof(struct shop));
    struct shop *s5 = (struct shop *)malloc(sizeof(struct shop));

    strcpy(head->s_name, "shopnoone");
    head->a_price = 500;
    head->w_price = 100;
    head->next = s2;

    strcpy(s2->s_name, "shopnotwo");
    s2->a_price = 200;
    s2->w_price = 250;
    s2->next = s3;

    strcpy(s3->s_name, "shopnothree");
    s3->a_price = 700;
    s3->w_price = 150;
    s3->next = s4;

    strcpy(s4->s_name, "shopnofour");
    s4->a_price = 1000;
    s4->w_price = 69;
    s4->next = s5;

    strcpy(s5->s_name, "shopnofive");
    s5->a_price = 50;
    s5->w_price = 70;
    s5->next = NULL;

    display(head);
    lowestPriceForWallnut(head);

    return 0;
}