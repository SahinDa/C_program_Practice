//21WAP in c to find heather a number is armstrong or not 
#include<stdio.h>
int main()
{
	int num,result=0,sum,no_of_digit=0,reminder,temp;
	printf("Enter a Number to check to wheather a its a Armstrong number or not  ");
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
	  	sum=1;
	  	reminder=temp%10;
	  	temp/=10;
	  	for(int j=0;j<no_of_digit;j++)
	  	sum*=reminder;
	  	result+=sum;
     }
	  if(num==result)
	  printf("%d is a Armstrong number ",num);
	  else 
	  printf("%d is not a Armstrong number ",num);
}
