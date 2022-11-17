//2. Write a C Program to print an array in reverse order

#include<stdio.h>
main()
{
	int arr[20],i,j,temp;
	printf("enter array size (max is 20)");
	scanf("%d",&i);
	printf("enter %d element  \n",i);
	for(j=0;j<i;j++)
	scanf("%d",&arr[j]);
    for(j=0;j<i/2;j++)
    {
	temp=arr[j];
	arr[j]=arr[i-1-j];
	arr[i-1-j]=temp;
	}
	printf("reverse array is : ");
	for(j=0;j<i;j++) 
	printf("%d ",arr[j]);
}

