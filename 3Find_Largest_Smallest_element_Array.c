//3. Write a C Program to find the largest and smallest element of an array
#include<stdio.h>
main()
{
	int arr[20],i,j,large,small;
	printf("enter array size (max is 20)");
	scanf("%d",&i);
	printf("enter %d element  \n",i);
	for(j=0;j<i;j++)
	scanf("%d",&arr[j]);
	  large=small=arr[0];
       for(j=0;j<i;j++)
       {
	  if(large>arr[j])
	  {
		  if(arr[j]<small)
		  small=arr[j];
			 }
			 else
			 {
				large=arr[j];
			 }
			
	
	   }
	printf("largest element of the array is %d\n  smallest element of the array is  %d",large,small);
}

