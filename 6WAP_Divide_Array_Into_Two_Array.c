//6. Write a C Program to divide one array into two arrays
#include<stdio.h>
main()
{
	int arr[10],arr1[5],arr2[5],i,j,k;
	printf("enter 10 array element ");
	for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<5;i++)
	arr1[i]=arr[i];
	for(j=0;j<5;j++,i++)
	arr2[j]=arr[i];
	printf("divided first array is \n");
	for(j=0;j<5;j++)
	printf("%d ",arr1[j]);
	printf("\n divided second array is \n");
	for(j=0;j<5;j++)
	printf("%d ",arr2[j]);

}

