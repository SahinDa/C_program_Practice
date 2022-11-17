//10. Write a C Program to Sort the Array in an Ascending Order
#include<stdio.h>
main()
{
    int arr[10]={0},i,j,temp;
printf("enter 10 array elements \n");
    for(i=0;i<10;i++)
scanf("%d",&arr[i]);

    for(i=0;i<9;i++)
    for(j=0;j<9-i;j++)
{
	if(arr[j]>arr[j+1])
	{
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	}
}
printf("Ascending array is ");
for(i=0;i<10;i++)
printf("%d ",arr[i]);
}

