#include<stdio.h>
#include<conio.h>
void main()
{
int sum[],n,k,s;
printf("Enter a value for n");
scanf("%d",&n);
printf("Enter the value for k");
scanf("%d",&k);
printf("Enter %d elements",n);
for(i=0;i<n;i++)
scanf("%d",&sum[i]);
for(i=0;i<k;i++)
s=s+sum[i];
printf("the sum of %d values in the array is %d",k,s);
getch();
}
