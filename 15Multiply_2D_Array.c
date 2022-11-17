//15. Write a C Program to multiply of Two Dimensional Arrays
#include<stdio.h>
main()
{
	int arr[2][2],arr1[2][2],mul[2][2],i,j,k;
	printf("enter 4(2*2)  elements for first array \n");
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
		scanf("%d",&arr[i][j]);
			printf("enter 4(2*2)  elements for second array \n");
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
		scanf("%d",&arr1[i][j]);
		for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
			mul[i][j]=0;
				for(k=0;k<2;k++){
			
			 	mul[i][j]+=arr[i][k]*arr1[k][j];
		}
		}
	
	
	
       printf("\nmultiplication of two dimention array are :: \n");
        for(i=0;i<2;i++){
		
        for(j=0;j<2;j++)
        printf("%d ",mul[i][j]);
        printf("\n");	
		}

}         

