//19. Write a C Program to Implement Stack using Array
int top=-1;
int pop(int*);
void push(int,int*);
void display(int *);
#include<stdio.h>
main()
{
	int i,choice,p=1,arr[40],data;
	
	while(p>0)
	{
		printf("enter your choice \n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 : printf("enter data \n");
		        scanf("%d",&data);
		        push(data,&arr[top]);
		        break;
		case 2 : data=pop(&arr[top]);
		         if(data!=-1)
		         printf("\npoped elements is %d\n",data);  
				 break;
		case 3 : display(&arr[0]);
		         break;
		case 4 : p=0;
		         break;
		default : printf("invalid choice\n");		 		 		     
	}
	}
	
}
int pop(int *p) 
{
	int data;
	if(top==-1){
		printf("stack is empty \n");
		return(-1);
	}
	else
	{
		data=*p;
		p--;
		top--;

	}
	return(data);
}
void push(int data,int *p )
{
	top++;
	p++;
	*p=data;
	
}
void display(int *p)
{
	int i;
	for(i=0;i<=top;i++,p++)
	printf("%d ",*p);
	printf("\n\n");
}

