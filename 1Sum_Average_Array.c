//1. Write a C Program to calculate sum and average of an array
#include<stdio.h>
main()
{
	int arr[20],i,sum=0,j;
	float ave;
	printf("enter array size (max is 20)");
	scanf("%d",&i);
	printf("enter %d element  \n",i);
	for(j=0;j<i;j++)
	{
	scanf("%d",&arr[j]);
			sum+=arr[j];
	}
	ave=(float)sum/i;
	printf("\nsum of %d array element is %d \n",i,sum);
	printf("Average of %d array element is %0.2f\n",i,ave);
	
}

