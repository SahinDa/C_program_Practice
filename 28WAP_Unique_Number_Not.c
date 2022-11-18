//28.WAP in c to find whatever a number is unique or not.
#include<stdio.h>
int main()
{
	int num,arr[10]={0},reminder,temp,check=1;
	printf("Enter a number to check whatever its a unique number or not ");
	scanf("%d",&num);
	temp=num;
	while(temp>0)
	{
		reminder=temp%10;
		arr[reminder]++;
		temp/=10;
	}
	for(int i=0;i<9;i++)
	{
		if(arr[i]>=2)
		check=0;
	}
	if(check==1)
	printf("%d is a unique number ",num);
	else 
	printf("%d is not a unique number ",num);
}
