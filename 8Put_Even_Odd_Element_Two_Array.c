//8. Write a C Program to Put Even & Odd Elements of an Array in 2 Separate Arrays
#include<stdio.h>
main()
{
      int arr[10],arr1[10]={0},arr2[10]={0},i,e=0,o=0;
printf("enter 10 array elements \n");
      for(i=0;i<10;i++)
scanf("%d",&arr[i]);
      for(i=0;i<10;i++)
      {
	if(arr[i]%2==0){
		arr1[e]=arr[i];
		e++;
		  }
else{
	arr2[o]=arr[i];
	o++;
	   }
	  }
	  if(arr1[0]!='\0'){
		printf("even elements of the array is \n");
	  for(i=0;i<e;i++)
	printf("%d ",arr1[i]);
	  }
	  else
	printf("there is no even elements\n");
	  if(arr2[0]!='\0'){
			printf("\nodd elements of the array is \n");
	  for(i=0;i<o;i++)
	printf("%d ",arr2[i]);
	  }
      else  
printf("\nTHere is no odd elements \n");

}

