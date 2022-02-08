#include<stdio.h>

int main()
{
int n1,n2,n3;
printf("\n Enter the size of the array:");
scanf("%d",&n1);
printf("\n Enter the size of second array:");
scanf("%d",&n2);
n3=n1+n2;
printf("\n Enter the sorted array elements:");
int a[n1],b[2],c[n3];
for(int i=0;i<n1;i++)
{
    scanf("%d",&a[i]);
    c[i]=a[i];
}
int k=n1;
printf("\n Enter the sorted array elements:");
for(int i=0;i<n2;i++)
{
    scanf("%d",b[i]);
    c[k]=b[i];
    k++;
}
printf("\n The merged array..\n");
for(int i=0;i<n3;i++)
printf("%d",c[i]);
printf("\n After sorting...\n");
for(int i=0;i<n3;i++)
{
    int temp;
    for(int j=i+1;j<n3;j++)
    {
        if(c[i]<c[j])
        {
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;
        }
    }
}
for(int i=0;i<n3;i++)
{
    printf("%d",c[i]);
}
return 0;
}
