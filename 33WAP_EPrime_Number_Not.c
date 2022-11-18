//33.WAP in c to find whatever a number is EPrime or not.
#include<stdio.h>
int main()
{
	int num,rev_num=0,reminder,temp,p=1;
	printf("Enter A number to check whatever its a EPrime number or not ");
	scanf("%d",&num);
	temp=num;
	while(temp)
	{
		reminder=temp%10;
		temp/=10;
		rev_num=rev_num*10+reminder;
	}
	for(int i=2;((i<=num/2)&&p==1);i++)
     	if(num%i==0)
			p=0;
	for(int i=2;((i<=rev_num/2)&&p==1);i++)
	   if(rev_num%i==0)
	    p=0;
	 
  if(p==1)
  printf("%d is a EPrime number ",num);
  else 
  printf("%d is not a EPrime number ",num);
	
	}
