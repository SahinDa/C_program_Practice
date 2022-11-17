//18. Write a C Program to Implement a Queue using an Array
#include<conio.h>
#include<stdio.h>
#define SIZE 10
void enqueue(int);
void dequeue();
void display();
int queue[SIZE],front=-1,rear=-1;
int main()
{
	int value,choice;
	int p=1;
	while(p>0)
	{
		printf("enter your choice press\n1.INSERTION\n2.DELETION\n3.DISPLAY\n4.EXIT\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : printf("enter the value you want to inserted\n");
			         scanf("%d",&value);
			         enqueue(value);
			         break;
			case 2: dequeue();
			         break;
			case 3 : display();
			         break;
			case 4 : p=0;
			        break;
			default: printf("\nWRONG SELECTION !! TRY AGAIN!!!\n");				 		          
		}
	}
}
void enqueue(int value){
	if(rear==SIZE-1)
	printf("\nQUEUE IS FULL!!!INSERTION IS NOT POSSIBLE!!!\n");
	else
	{
	 if(front==-1)
	 front=0;
	 
	 rear++;
	 queue[rear]=value;
	 printf("Insertion success!!!");	
	}
	
}
void dequeue(){
	
	if(rear==-1||front==(rear+1)){
			printf("queue is empty\n");
			front=rear=-1;
	}
	else 
	{
		printf("deleted element is %d \n",queue[front]);
		front++;
	}
	}
	
void display(){
	if(rear==-1)
	printf("\n Queue is empty\n");
	else
	{
		int i;
		printf("\n Queue elements are : \n");
		for(i=front;i<=rear;i++)
		printf("%d\t",queue[i]);
		printf("\n");
	}
}

