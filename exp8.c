#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,sum=0,n;
printf("Enter the number of elements to added");
scanf("%d",&n);
for(i=0;i<n;i++)
{
sum=sum+i;
}
printf("The sum of the natural numbers are %d",sum);
getch();
}
