#include<stdio.h>
#include<conio.h>
int c;
void main()
{
void input_array(int[],int n);
void output_array(int[],int n);
void insertion_sort(int[],int n);
int a[100],n;
clrscr();
printf("enter size of array");
scanf("%d",&n);
printf("enter element of arrays");
input_array(a,n);
printf(" elements of arrays");
output_array(a,n);
insertion_sort(a,n);
printf(" arrays after sort");
output_array(a,n);
printf("total count=%d",c);
getch();
}
void input_array(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
void output_array(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
void insertion_sort(int a[],int n)
{
int i,j,key;       c++;
for(j=1;j<n;j++)
{c++;
key=a[j];            c++;
i=j-1; c++;
while(i>=0 & a[i]>key)
{
a[i+1]=a[i];c++;
i=i-1;      c++;
}
a[i+1]=key;     c++;
}c++;
}
