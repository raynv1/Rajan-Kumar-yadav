#include<stdio.h>
#include<conio.h>
void inputarray(int[],int);
void selectionsort(int [],int);
void outputarray(int[],int);
int c;
void main()
{

int a[100],n,i;
clrscr();
printf("enter size of array");
scanf("%d",&n);
printf("enter element of array");
inputarray(a,n);
selectionsort(a,n);
printf("array is ");
outputarray(a,n);
printf("the value of c is %d",c);
getch();
}
void inputarray(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
void outputarray(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
void selectionsort(int a[],int n)
{
int min,index,i,j,temp;
c++;
for(i=0;i<n-1;i++)
{                         c++;
	min=a[i];
	index=i;
	c++;
	for(j=i+1;j<n;j++)
	{
		c++;
		if(min>a[j])
		{
		index=j;                                c++;
		min=a[j];                          	c++;
		}
	}

	if(i!=index)
	{

	temp=a[i];                  c++;
	a[i]=a[index];                  c++;
	a[index]=temp;                      c++;

	}
	c++;
}
}