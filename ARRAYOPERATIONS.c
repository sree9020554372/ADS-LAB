#include<stdio.h>
#include<conio.h>
void main()
{
 int n,a[50],pos,i,x,choice,item;
 printf("\n Enter the size:");
 scanf("%d",&n);
 printf("\n Enter the elements \n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("\n Array Operations:");
 printf("\n 1.Array Insert \n");
 printf("\n 2.Array Delete \n");
 printf("\n 3.Array Traverse \n");
 printf("\n 4.Array Search");
 printf("\n Enter the choice:");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 {
printf("\n Enter element and position to be Insert at:");
 scanf("%d %d",&x,&pos);
 pos--;
 for(i=n;i!=pos;i--)
 a[i]=a[i-1];
 a[i]=x;
 for(i=0;i<=n;i++)
 {
 printf("\n %d",a[i]);
 }
 }
 case 2:
 {
 printf("\n Enter element and position to be Delete at:");
 scanf("%d %d",&x,&pos);
 pos--;
 for(i=0;i<n;i++)
 {
 if(i>pos)
 a[i]=a[i+1];
 }
 for(i=0;i<n;i++)
 if(a[i]!=0)
 printf("\n %d",a[i]);
 }
 case 3:
{
 printf("\n Traversal \n -----------\n\n the element are:");
 for(i=0;i<n;i++)
 printf("%3d",a[i]);
 }
 case 4:
 {
 printf("\n Enter the element to be Searched item:");
 scanf("%d",&item);
 for(i=0;i<n;i++)
 if(a[i]==item)
 printf(" element is found");
 }
 default:
 printf("\n Invalid Option:");
 }
 getch();
 }
