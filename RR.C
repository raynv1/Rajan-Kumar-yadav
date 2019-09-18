#include<stdio.h>
#include<conio.h>
void main()
{
void input_array(int[],int n);
void output_array(int[],int n);
void insertion_sort(int[],int n);
int a[10],n;
clrscr();
printf("enter size of array");
scanf("%d",&n);
printf("enter element of arrays");
input_array(a,n);
printf(" elements of arrays");
output_array(a,n);
insertion_sort(a,n);
printf(" arrays after search");
output_array(a,n);
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
void ouput_array(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d/n",a[i]);
}
}
void insertion_sort(int a[],int n)
{
int i,j,key;
for(j=1;j<n;j++)
{key=a[j];
i=j-1;
while(i>=0 & a[i]>key)
{a[i+1]=a[i];
i=i-1;
}
a[i+1]=key;
}}
