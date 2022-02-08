#include<stdio.h>
#include<conio.h>
#define max 6
int q[max];
int front=-1,rear=-1,ch,n,i;
void enqueue();
void dequeue();
void display();
int main()
{
printf("\n\t Queue operations using array\n");
printf("\n menu\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
do
{
printf("\nEnter the choice");
scanf("%d",&ch);
switch(ch)
{

case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:display();
break;
case 4:exit(0);
break;
default:
printf("\n Enter a valid choice");

}
}
while(ch!=4);
return 0;
}

void enqueue()
{
if(rear==max-1)
{

printf("\n overflow element can't be enter");
}
else
{
printf("\n enter the value to be inserted");
scanf("%d",&n);
if(front==-1)
front=0;
rear++;
q[rear]=n;
printf("\n Insertion success");
display();
}
}

void dequeue()
{
if(front==rear)
{
printf("\n queue is empty");
front=rear=-1;

display();
}
else
{
printf("\n deleted the element :%d",q[front]);
front++;
}
}
void display()
{
if(rear==-1)
{
printf("\n queue is empty");
}
else
{
printf("\n queue elements are:\n");
for(i=front;i<=rear;i++)

printf("%d\t",q[i]);
}
