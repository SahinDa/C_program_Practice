//13. Write a C Program to Sum of two One-Dimensional Arrays
#include<stdio.h>
main()
{
	int arr[10],arr1[10],i,sum[10];
	printf("enter 10  elements for first array \n");
	for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
	printf("enter 10 element for second array \n");
	for(i=0;i<10;i++)
	scanf("%d",&arr1[i]);
	for(i=0;i<10;i++)
	sum[i]=arr[i]+arr1[i];
	printf("\n sum of two one dimensional array are \n");
	for(i=0;i<10;i++)
	printf("%d ",sum[i]);
}

