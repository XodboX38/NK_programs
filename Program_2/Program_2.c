/*1: WAP to find the length & breadth of a rectangle.*/

#include<stdio.h>
#include<conio.h>
#include<time.h>
main(){
	printf("\n\tProgram To SWAP variables");
	int var_1, var_2,choice,temp;
	start:
	printf("\n\n\t1: SWAP without temp variable.");
	printf("\n\n\t2: SWAP using temp variable.");
	printf("\n\n\t3: EXIT");
	
	printf("\n\n\tEnter your choice:\t");
	scanf("%d",&choice);
	
	switch(choice){
		case 1: 
			printf("\n\tEnter the 1st variable:\t");
			scanf("%d",&var_1);
			printf("\n\tEnter the 2nd variable:\t");
			scanf("%d",&var_2);
			printf("\n\n\tYour 1st Variable is:\t%d",var_1);
			printf("\n\tYour 2nd Variable is:\t%d",var_2);
			//SWAPPING without temp variable
			var_1=var_2+var_1;
			var_2=var_1-var_2;
			var_1=var_1-var_2;
			//SWAPPING ends here
			
			printf("\n\n\tThe value for 1st variable is:\t%d",var_1);
			printf("\n\tThe value for 2nd variable is:\t%d",var_2);
			break;
		case 2:
			printf("\n\tEnter the value for 1st variable:\t");
			scanf("%d",&var_1);
			printf("\n\tEnter the value for 2nd variable:\t");
			scanf("%d",&var_2);
			printf("\n\n\tYour 1st Variable is:\t%d",var_1);
			printf("\n\tYour 2nd Variable is:\t%d",var_2);
			//SWAPING using temp variable
			temp=var_1;
			var_1=var_2;
			var_2=temp;
			//SWAPING ends here
			printf("\n\n\tThe value for 1st variable is:\t%d",var_1);
			printf("\n\tThe value for 2nd variable is:\t%d",var_2);
			break;
		case 3:
			printf("\n\tEXITING the program......");
			return;
			break;
		default:
			printf("\n\tPlease choose valid option");
			getch();
			goto start; 	
			break;
	}
	
	
	//Program to display time	
	time_t t;
	time(&t);
	printf("\n\n\tProgram is executed on:\t%s",ctime(&t));
	printf("\n\n\n\n");
}//Main ends here
