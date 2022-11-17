//16. Write a C Program to Insert an Element in a Specified Position in a given Array
#include<stdio.h>
main()
{	
	 int arr[10],n,i,p;
	 printf("enter a 9 element of array \n");
	 for(i=0;i<9;i++)
	 scanf("%d",&arr[i]);
	 printf("enter the position and element that you want to insert \n");
	 scanf("%d%d",&p,&n);
	 for(i=9;i>=p;i--)
	 arr[i]=arr[i-1];
	 arr[p-1]=n;
	 printf(" \n final array is \n");
	 for(i=0;i<10;i++)
	 printf("%d ",arr[i]);
}

