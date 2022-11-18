//27.WAP in c to find whatever a number is buzz or not.
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number to check whatever it a buzz number or not ");
	scanf("%d",&num);
	if((num%10==7)&&(num%7==0))
	printf("%d is a buzz number ",num);
	else
	printf("%d is not a buzz number ",num);
}
