#include<stdio.h>
int a[5],pos=-1;// global variable
void insert(int e) //insert function
{
	if(pos+1==5)
	{
		printf("error:array is full");
	}
	else
	{
		a[++pos]=e; //pre increment
	}
}
void del() // delete function
{
	if(pos==-1)
	{
		printf("error:array is empty");
		
	}
	else
	{
		printf("\n %d",a[pos--]);
	}
}
void display() //display function
{
	int i;
	for(i=0;i<=pos;i++)
	{
		printf("%d \t",a[i]);
	}
	printf("\n");
}
void search()
{
	for(i=0;i<top;i++)
	{
		isfound=1;
		printf("element found at %d position",i);
	}
	if(isfound=0)
	{
		printf("elements not found");
	}
}

int menu() 

{
	int ch;
	printf("\n 1.INSERT \n 2.DELETE \n 3.DISPLAY \n 4.SEARCH \n 5.EXIT \n ENTER YOUR CHOICE: ");		
	scanf("%d",&ch);
	return ch;
}
void processArray()
{
	int ch;
	for(ch=menu();ch!=4;ch=menu())
	
	{
		switch(ch)
		{
			case 1:
				printf("enter value to insert: ");
				scanf("%d",&ch);
				insert(ch);
				break;
			case 2:
				del();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("enter element to search:")
				search();
				break;
					
			default:
				printf("error:wrong choice");
				break;
					
		}
	}
}

int main() { //main function
    processArray();
	return 0;
}

		


