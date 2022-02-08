
Conversation opened. 1 read message.

Skip to content
Using Academic Enterprise Solutions (AES) Mail with screen readers
in:sent
2 of 109
Linked stack

SREELEKSHMI ANILKUMAR RMCA 2021-2023 B <sreelekshmianilkumar2023b@mca.ajce.in>
2:57 AM (10 minutes ago)
to sreelekshmianil90

    #include <stdio.h>
    #include <stdlib.h>
    void push();
    void pop();
    void search();
    void display();
    struct node
    {
    int val;
    struct node *next;
    };
    struct node *top;

    void main ()
    {
        int choice=0;
        printf("\n*********Stack operations using linked list*********\n");
        printf("\n----------------------------------------------\n");
        while(choice != 5)
        {
            printf("\n\nChoose one from the below options...\n");
            printf("\n 1.Push\n 2.Pop\n 3.search\n 4.display\n 5.Exit");
            printf("\n Enter your choice \n");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                {
                    push();
                    break;
                }
                case 2:
                {
                    pop();
                    break;
                }
                case 3:
                {
                    search();
                    break;
                }
                case 4:
                {
                    display();
                    break;
                }
                case 5:
                {
                    printf("Exiting....");
                    break;
                }
                default:
                {
                    printf("Please Enter valid choice ");
                }
        };
    }
    }
    void push ()
    {
        int val;
        struct node *ptr = (struct node*)malloc(sizeof(struct node));
        if(ptr == NULL)
        {
            printf("not able to push the element");
        }
        else
        {
            printf("Enter the value");
            scanf("%d",&val);
            if(top==NULL)
            {
                ptr->val = val;
                ptr -> next = NULL;
                top=ptr;
            }
            else
            {
                ptr->val = val;
                ptr->next = top;
                top=ptr;

            }
            printf("Item pushed");

        }
    }

    void pop()
    {
        int item;
        struct node *ptr;
        if (top == NULL)
        {
            printf("Underflow");
        }
        else
        {
            item = top->val;
            ptr = top;
            top = top->next;
            free(ptr);
            printf("Item popped");

        }
    }
    void search()
    {
        int item;
        struct node *ptr;
        ptr=top;
        if(ptr == item)
        {
            printf("Item is found");
        }
        else
        {
            printf("Item is not found");
        }
    }
    void display()
    {
        int item;
        struct node *ptr;
        ptr=top;
        if(ptr == NULL)
        {
            printf("Stack is empty\n");
        }
        else
        {
            printf("Printing Stack elements \n");
            while(ptr!=NULL)
            {
                printf("%d\n",ptr->val);
                ptr = ptr->next;
            }
        }
    }
