#include <stdio.h>
#include <stdlib.h>
struct node{
    int info;
    struct node *next;
};
 int main()
 {
     struct node* first=(struct node*)malloc(sizeof(struct node));
     struct node* second=(struct node*)malloc(sizeof(struct node));
     struct node* third=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&first->info);
    first->next=second;
    scanf("%d",&second->info);
    second->next=third;
    scanf("%d",&third->info);
    third->next=NULL;
    struct node* np=first;
    while(np!=NULL)
    {
        printf("%d\n",np->info);
        np=np->next;
    }


 }
