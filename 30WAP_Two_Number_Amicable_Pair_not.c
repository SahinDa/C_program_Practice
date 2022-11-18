//30.WAP in c to find whatever two numbers are amicable pair or not.
#include<stdio.h>
int main()
{
	int num1,num2,result1=0,result2=0,reminder,temp1,temp2;
	printf("Enter two Number to check whatever its a amicable pair or not ");
	scanf("%d%d",&num1,&num2);
     for(int i=1;i<=num1/2;i++)
     {
     	if(num1%i==0)
     	result1+=i;
	 }
	 for(int i=1;i<=num2/2;i++)
	 {
	 	if(num2%i==0)
	 	result2+=i;
	 }
	 if((num1==result2)&&(num2==result1))
	 printf("%d and %d are amicable pair ",num1,num2);
	 else 
	 printf("%d and %d  are not amicable pair ",num1,num2);
	 
}
