#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data,key;
        struct node*link;
};
void beginsert();
void lastinsert();
void speciinsertion();
void begin_delete();
void last_delete();
void specideletion();
void display();
void main()


{
    int choice=0;

    while(choice!=8)
    {
        printf("\n\n******main menu*******\n");
        printf("\n choose one option from the following list\n");
        printf("\n-------------------------\n");
        printf("3 :traverse into the linked list\n");
        printf("\n 1.insert at begin\n 2.insert at last\n 3.insert at specific position\n 4.delete from begin\n 5.delete from last\n 6.delete at specific position\n 7.display\n 8.exit  \n");
        printf("\n enter your choice?\n");
        scanf("\n%d",&choice);
        switch(choice)
        {
        case 1:
            beginsert();
            break;
        case 2:
            lastinsert();
            break;
        case 3:
          speciinsertion();
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            last_delete();
            break;
        case 6:
           specideletion();
            break;
        case 7:
            display();
            break();
        case 8:
            exit(0);
            break;
            deafault:
                printf("enter valid choice:");
        }

    }

}
void beginsert()
{
    struct node*link=(struct node*)malloc(sizeof(struct node));
    link->key=key;
    link->data=data;
    if(is Empty())
    {
        last=link;
    }
    else
    {
         head=prev;
    }
   link->next=head;
   head=link;
}
void lastinsert()
{
    struct node*link=(struct node*)malloc(sizeof())
    link->key=key;
    link->data=data;
    if(is Empty())
    {
        last=link;
    }
    else
    {
        last->next=link;
        link->prev=last;
    }
    last=link;
}
void bigin_delete()
{
    struct node*templink=head;
    if(head->next==null)
    {
        last=null;
    }
    else
    {
        head->next->prev=null;
    }
    head=head->next;
    return templink;
}
void last_delete()
{
    struct node*templink=head;
    if(head->next==null)
    {
        last=null;
    }
    else
    {
        last->next=link;
        link->prev=last;
    }
     last=link;
}
void display()
{
    struct node*templink;
    templink=head;
    if(templink==null)
    {
        printf("\n Nothing to print");
    }
    else
    {
        printf("\n printing values");
        while(templink!=link)
        {
            printf("\n%d",templink->data);
            templink=templink->next;
        }
    }
}
