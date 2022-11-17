//7. Write a C to concatenate two arrays

#include<stdio.h>
main()
{	
	int arr[10],arr1[5],arr2[5],i,j;
printf("enter 5 element for first array \n");
     for(i=0;i<5;i++)
scanf("%d",&arr1[i]);
printf("enter 5 Element for second array \n");
     for(i=0;i<5;i++)
scanf("%d",&arr2[i]);
     for(i=0;i<5;i++)
arr[i]=arr1[i];
     for(j=0;j<5;i++,j++)
arr[i]=arr2[j];
printf("concatenate array is \n");
     for(i=0;i<10;i++)
printf("%d ",arr[i]);

}

