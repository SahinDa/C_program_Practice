//5. Write a C Program to Find the Largest Two Numbers in a given Array
#include<stdio.h>
main()
{
	int arr[20],i,j,k,tem;
	printf("enter array size (max is 20)");
	scanf("%d",&i);
	printf("enter %d element  \n",i);
	for(j=0;j<i;j++)
	scanf("%d",&arr[j]);
       for(j=0;j<i-1;j++)
       {
	 for(k=0;k<i-1-j;k++)
		if(arr[k]>arr[k+1])
		{
			tem=arr[k];
			arr[k]=arr[k+1];
			arr[k+1]=tem;
				}	
	   }
	printf(" Largest two numbers in a given array is %d and %d ",arr[i-1],arr[i-2]);
}

