//29.WAP in c to find whatever a number is magic or not.
#include<stdio.h>
int main()
{
	int num,reminder,temp,sum=0;
	printf("Enter a number to check whatever it's a magic number or not ");
	scanf("%d",&num);
	temp=num;
	while(temp>0)
	{
		reminder=temp%10;
		sum+=reminder;
		temp/=10;
	}
	while(sum>=10)
	sum/=10;
	if(sum==1)
	printf("%d is a magic number ",num);
	else 
	printf("%d is not a magic number ",num);
}
