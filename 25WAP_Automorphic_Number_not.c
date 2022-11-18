//25.WAP in c to find wheather a number is automorphic or not
#include<stdio.h>
int main()
{
	int num,square,reminder,no_of_digit=0,result=0,temp,p=0,k=1;
	printf("Enter a number to check whatever its a  automorphic number or not ");
	scanf("%d",&num);
	square=num*num;
	temp=num;
	while(temp>0)
	{
		no_of_digit++;
		temp/=10;
	}
	temp=square;
	for(int i=0;i<no_of_digit;i++)
	{
		reminder=temp%10;
		temp/=10;
		result=reminder*k+result;
		k*=10;	
	}
	if(result==num)
	printf("%d  is a automorphic number ",num);
	else 
	printf("%d is not a automorphic number ",num);
}
