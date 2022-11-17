//9. Write a C Program to Read an Array and Search for an Element
#include<stdio.h>
main()
{
	int arr[20],i,n,index[15],count=0,p=0;
	printf("enter 15 element \n");
	for(i=0;i<15;i++)
	scanf("%d",&arr[i]);
	printf("\nenter search element \n");
	scanf("%d",&n);
	
	for(i=0;i<15;i++)
	{
		if(arr[i]==n)
		{
			index[p]=i+1;
			count++;
			p++;
			
		}
	}
	if(count!='\0'){
			printf("search elements found in %d times and index are \n",count);
			for(i=0;i<p;i++)
			printf("%d ",index[i]);
	}

	else printf("search element not found");
}

