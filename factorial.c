#include<stdio.h>
void main()
{
int i,num,fact=1;
printf("enter number : ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
fact=fact*i;
}
printf("factorial is %d\n",fact);


}
