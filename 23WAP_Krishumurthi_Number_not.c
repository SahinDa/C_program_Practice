//23.WAP in c to find wheather a number is Krishnumurthi or not.
#include<stdio.h>
int main()
{
	int num,result=0,reminder,temp,sum,no_of_digit=0;
	printf("Enter a number to check whatever its a Krishumurthi Number or not ");
	scanf("%d",&num);
	temp=num;
	while(temp>0)
	{
		no_of_digit++;
		temp/=10;
	}
	  temp=num;
	for(int i=0;i<no_of_digit;i++)
	{
		reminder=temp%10;
		temp/=10;
		sum=1;
		for(int j=2;j<=reminder;j++)
		sum*=j;
		result+=sum;
		
	}
	if(num==result)
	printf("%d is a Krishumurthi Number ",num);
	else
	printf("%d is not a Krishumurthi Number ",num);
}
