//20.WAP in c to find wheather a number is prime or not
#include<stdio.h>
int main()
{
	int num,prime=1;
	printf("Enter a number to check whatever it's a prime number or not ");
	scanf("%d",&num);
	for(int i=2;i<num/2;i++)
	{
		if(num%i==0){
			prime=0;
			break;
		}
	}
	
	if(prime==1)
	printf("%d is a prime number ",num);
	else 
	printf("%d is not a prime number ",num);
	
}
