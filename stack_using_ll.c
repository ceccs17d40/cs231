#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
int main(void)
{
    int cho;
    struct node *temp,*top,*head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=0;
    temp->link=NULL;
    head=temp;
    top=head->link;
    do{
        printf("\n MENU \n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter the choice:");
        scanf("%d",&cho);
        if(cho==1)
        {
            temp=(struct node*)malloc(sizeof(struct node));
            printf("Enter the element:");
            scanf("%d",&temp->data);
            temp->link=head->link;
            head->link=temp;
            top=head->link;
        }
        else if(cho==2)
        {
            if(top==NULL)
            {
                printf("Stack is empty!");
            }
            else
            {
                printf("Popped out %d",top->data);
                temp=top;
                top=top->link;
                head->link=top;
                free(temp);
            }
        }
        else if(cho==3)
        {
            printf("Elements:");
            temp=top;
            while(temp!=NULL)
            {
                printf("%d->",temp->data);
                temp=temp->link;
            }
            printf("NULL\n");
        }
    }while((cho==1)||(cho==2)||(cho==3));
    return 0;
}