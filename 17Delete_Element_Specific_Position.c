//17. Write a C Program to Delete the Specified number from an Array
#include<stdio.h>
main()	
{
	 int arr[20],n,i,p=0,k,f;
	 printf("enter array size(max is 20) : \n");
	 scanf("%d",&f);
	 printf("enter a %d element of array \n",f);
	 for(i=0;i<f;i++)
	 scanf("%d",&arr[i]);
	 printf("enter the  element that you want to Delete \n");
	 scanf("%d",&n);
	 for(i=0;i<f;i++)
	 {
	 	if(arr[i]==n){
	 		   for(k=i;k<f;k++)
	 			arr[k]=arr[k+1];
	 			p=1;
	 			f--;
		 }
 }
	 
	
 if(p==0)
	 	 printf("specified number not found \n");
	  printf(" \n final array is \n");
	 for(i=0;i<f;i++)
	 printf("%d ",arr[i]);
}

