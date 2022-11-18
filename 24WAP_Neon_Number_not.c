//24WAP in c to find wheather a number is neon or not.
#include<stdio.h>
int main()
{
	int num,reminder,sum=0,square,temp;
	printf("Enter a number to check whatever its  a neon number or not ");
	scanf("%d",&num);
	square=num*num;
	temp=square;
	while(temp>0)
	{
		reminder=temp%10;
		temp/=10;
		sum+=reminder;
	}
	if(sum==num)
	printf("%d is a neon number ",num);
	else 
	printf("%d  is not a neon number ",num);
	
}
