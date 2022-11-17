//4. Write a C Program to find the second largest & second smallest e lements in an Array
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
	printf(" 2nd largest element of the array is  %d\n 2nd smallest  element of the array is %d",arr[i-2],arr[1]);
}

