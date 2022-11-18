//22.WAP in c to find wheather a number is palindrome or not
#include<stdio.h>
int main()
{
	int num,reverse_num=0,reminder,temp;
	printf("Enter a Number to check whatever it's a Palindrome number  or not ");
	scanf("%d",&num);
	temp=num;
	while(temp>0)
	{
		reminder=temp%10;
		temp/=10;
		reverse_num=reverse_num*10+reminder;
	}
	if(num==reverse_num)
	printf("%d is a palindrome number ",num);
	else 
	printf("%d is not a palindrome number ",num);
	
}
