#include<stdio.h>
int main()
{
	int n,i=0;
	printf("enter no. of bricks: \n");
	scanf("%d",&n);

while(n!=0)
{
   n=n-i;
   if(n<1)
   {
	   printf("Patlu");
	   break;
   }
   n=n-2*i;
   if(n<1)
   {
	   printf("Motu");
	   break;
   }i++;
   }
   return 0;}
