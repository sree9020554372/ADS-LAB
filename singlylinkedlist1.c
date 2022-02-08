#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node*next;
};
struct node*head;
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
        printf("\n 1.insert at begining\n 2.insert at last\n 3.insert at specific position\n 4.delete from begining\n 5.delete from last\n 6.delete at specific position\n 7.display\n 8.exit  \n");
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
  struct node *ptr;
  int item;
  ptr=(struct node*)malloc(sizeof(struct node));
  if(ptr==null)
  {
      printf("\n overflow");

  }
  else
  {
      printf("\n enter value\n");
      scanf("%d",&item);
      pttr->data=item;
      ptr->next=head;
      head=ptr;
      printf("\n node inserted");

      }
}

void last_insert()

{
    struct node *ptr,*temp;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==null)
    {
        printf("\ overflow");
    }
    else
    {
        printf("\n enter value\n");
        scanf("%d",&item);
        ptr->data=item;
        if(head==null)
        {
            ptr->next=null;
            head=ptr;
            printf("\n node inserted:");
        }
        else
        {
          temp=head;
          while(temp->next!=null)
          {
              temp=temp->next;
          }
        temp->next=ptr;
        ptr->next=null;
        print("\n node inserted");

        }
    }
}
void speciinsertion()
{
    int i, loc ,item;
    struct node *ptr,*temp;
    ptr=(struct node)malloc(sizeof(struct node));
    if(ptr==null)
    {
        printf("\n overflow");
    }
    else
    {
        printf("\n enter element value:")
        scanf("%d",&item);
        ptr->data=item;
        printf("\n enter the location after which you want to insert");
        scanf("%d",&loc)
        temp=head;
        for(i=0;i<loc;i++)
        {
            temp=temp->next;
            if(temp==null)
            {
                printf("\n can't insert\n");
                return;
            }
        }
        ptr->next=temp->next;
        temp->next=ptr;
        printf("\n node inserted");

    }
}
void begin-delete()
{
    struct node*ptr;
    if(head==null)
    {
        printf("\n list empty\n");
    }
    else
    {
        ptr=head;
        head=ptr->next;
        free(ptr);
        printf("\n node deleted from the begning..\n");
    }
}
void last delete()
{
    struct node*ptr,*ptr1;
     if (head==null)
     {
         printf("\n list is empty");
     }
     else if(head->next==null)
     {
         head=null;
         free(head);
         printf("\n only node of the list deleted...\n");
     }
     else
     {
         ptr=head;
         while(ptr->next!=null)
         {
             ptr1=ptr;
             ptr=ptr->next;
         }
         ptr1->next=null;
         free(ptr);
         printf("\n deleted node from the last..\n");
     }
    }
    void specideletion()
    {
        struct node*ptr,*ptr;
        int loc,i;
        printf("\n Enter the location of the node after which you want to perform deletion\n");
        scanf("%d",&loc);
        pttr=head;
        for(i=0;i<loc;i++)
        {
            ptr1=ptr;
            ptr=ptr->next;
        if(ptr==null)
        {
            printf("\n can;t delete");
            return;
        }
        }
        ptr1->next=ptr->next;
        free(ptr);
        printf("\n deleted node %d",loc+1);
    }
    void display()
    {
        struct node*ptr;
        ptr=head;
        if(ptr==null)
        {
            printf("Nothing to print");
        }
        else
            {
                printf("\n printing values\n");
                while(ptr!=null)
                {
                    printf("\n%d",ptr->data);
                    ptr=ptr->next
                }
            }
        }
