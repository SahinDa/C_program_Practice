//14. Write a C Program to Sum of Two Dimensional Arrays
#include<stdio.h>
main()
{
	int arr[5][5],arr1[5][5],i,j,sum[5][5];
	printf("enter 25(5*5)  elements for first array \n");
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	scanf("%d",&arr[i][j]);
	printf("enter 25(5*5) element for second array \n");
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	scanf("%d",&arr1[i][j]);
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	sum[i][j]=arr[i][j]+arr1[i][j];
	printf("\n sum of two two dimensional array are \n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++)
	printf("%d ",sum[i][j]);
	printf("\n");
	}
	
}

