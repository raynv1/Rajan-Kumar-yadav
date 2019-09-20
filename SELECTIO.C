#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,min,temp,n,a[10];
clrscr();
printf("enter the numbers in array");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n-1;i++)
 {
   min=i;
   for(j=i+1;j<n;j++)
     {
    if(a[j]<a[min])
      {
      min=j;
      }
     }

temp=a[i];
a[i]=a[min];
a[min]=temp;
}
fo

