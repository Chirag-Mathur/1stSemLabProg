#include <stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next;
};

 int main()
 {
     struct node *first=NULL,*last=NULL,*np=NULL,*temp=NULL;
        
        int a=1;
        while(a)
        {
            np=(struct node*)malloc(sizeof(struct node));
            np->next=NULL;
            scanf("%d",&np->info);
            if(first==NULL)
            {
                //printf("Adding first node\n");
                first=last=np;
            }
            else
            {
                //printf("Adding another node\n");
                last->next=np;
                last=np;
            }
            //printf("Do you want to continue\n");
            scanf("%d",&a);
        };
        

        temp=first;
         while(temp!=NULL)
         {
            printf("%d ",temp->info); 
             
             temp=temp->next;
            
         }
         return 0;
         
 }
