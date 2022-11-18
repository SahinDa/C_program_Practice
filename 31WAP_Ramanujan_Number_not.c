//31.WAP in c to find whatever a number is ramanujan or not.
/* Algorithm :
  i. Read an integer from the user.
  ii.Sum up the individual digits.
  iii.Find the reverse of the sum.
  iv. Calculate the product of the original number and Reversed Number.
  
  Example:
Suppose, we want to check the number 1458 is a Ramanujan number or not.

1458 = 1 + 4 + 5 + 8 =18
18 -> 81
18 * 81 = 1458
*/
#include<stdio.h>
int main()
{
	int num,sum=0,rev_num=0,product,temp,reminder;
	printf("Enter a number to check it is a ramanujan number or not ");
	scanf("%d",&num);
	temp=num;
	 while(temp)
	{
		reminder=temp%10;
		temp/=10;
		sum+=reminder;
	}	
	temp=sum;
	while(temp)
	{
		reminder=temp%10;
		temp/=10;
		rev_num=rev_num*10+reminder;
	}
	if(num==(sum*rev_num))
	printf("%d is a Ramanujan Number ",num);
	else 
	printf("%d is not a Ramanujan Number ",num);
}
