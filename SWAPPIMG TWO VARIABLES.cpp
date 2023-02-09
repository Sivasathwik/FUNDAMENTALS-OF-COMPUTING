#include<stdio.h>
int main()
{
	int a,b,num;
	printf("Enter frst number :");
	scanf("%d",&a);
	printf("Enter second number");
	scanf("%d",&b);
	num=a;
	a=b;
	b=num;
	printf("enter after swaping %d\n",a);
	printf("enter before swaping %d\n",b);
	
	return 0;
}