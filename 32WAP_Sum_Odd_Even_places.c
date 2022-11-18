//32.WAP in c to compute sum of digit sum od digit  in even place andd some digit in odd place
#include<stdio.h>
int main()
{
	int num,odd_sum=0,even_sum=0,reminder,flag=0,temp;
	printf("Enter a number to Calculated sum of even and odd place ");
	scanf("%d",&num);
	temp=num;
	while(temp)
	{
		reminder=temp%10;
		temp/=10;
		if(flag==0){
		even_sum+=reminder;
		flag=1;
	    }
		else {
		odd_sum+=reminder;
		flag=0;
	     }
		
	}
	printf("Sum of even places is %d and Sum of odd places is %d ",even_sum,odd_sum);
}
