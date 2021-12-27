/*1: WAP to find the length & breadth of a rectangle.*/

#include<stdio.h>
#include<conio.h>
#include<time.h>
int program(int, int);

main(){
	start:
		system("cls");
	printf("\n\tProgram To Find Area of rectangle");
	printf("\n\n\t1: Run the Program");
	printf("\n\t2: EXIT");
	int choice,length,breadth;
	printf("\n\n\tEnter your choice:\t");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\n\tEnter the length:\t");
			scanf("%d",&length);
			
			printf("\n\tEnter the breadth:\t");
			scanf("%d",&breadth);
			
			printf("\n\tArea:\t%d",program(length, breadth));
			break;
			
		case 2:
			printf("\n\tExiting the Program.......");
			break;
		
		default:
			printf("\n\tPlease Choose Valid Option");
			getch();
			goto start;
			break;	
	}//switch ends here
	
//Program to display time	
	time_t t;
	time(&t);
	printf("\n\n\tProgram is executed on:\t%s",ctime(&t));
	printf("\n\n\n\n");
}//Main ends here

//Function for Area
int program(length, breadth){
	return length*breadth;
}
