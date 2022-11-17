//12. Write a C Program to Sort Names in an Alphabetical Order
#include<strings.h>
#include<stdio.h>
main()
{
     char arr[5][20],temp[20];
     int j,k,i;
printf("enter five names :\n");
     for(i=0;i<5;i++)
     gets(arr[i]);
     for(i=0;i<4;i++)
     for(j=0;j<4-i;j++)
     {
	if(strcmp(arr[j],arr[j+1])>0)
	{
		strcpy(temp,arr[j]);
		strcpy(arr[j],arr[j+1]);
		strcpy(arr[j+1],temp);
		 }
	
	 }

printf("\nNames after sorting Alphabetically order\n");
    for(i=0;i<5;i++)
    puts(arr[i]);
}

