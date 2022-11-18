//26.WAP in c to find wheather a number is weak arm or not.
#include<stdio.h>
int main()
{
	int num,reminder,no_of_digit,temp,factor,result=0;
	printf("Enter a number to check whatever ");
	scanf("%d",&num);
	temp=num;
	while(temp>0)
	{
		temp/=10;
		no_of_digit++;
	}
	temp=num;
	
	for(int i=0;i<no_of_digit;i++)
	{
		reminder=temp%10;
		temp/=10;
		factor=1;
		for(int j=0;j<no_of_digit-i;j++)
		factor*=reminder;
		result+=factor;
	}

	if(result==num)
	printf("%d is a Weak Arm number ",num);
	else
	printf("%d is not a weak arm number ",num);
}
