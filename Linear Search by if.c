/***********************************************************************/
/*Title : Linear Search                                                */
/*Description : search on value in 10 numbers and print value location */               
/*File Name : Lec2_Ass1.c                                              */
/*Date : 7 Jul 2022                                                    */
/***********************************************************************/

/*standard C library include*/
#include <stdio.h>

void main(void) 							  //Entry Point
{
	/*variables to read values from user*/
	int local_intNum1, local_intNum2, local_intNum3, local_intNum4, local_intNum5, local_intNum6,
	local_intNum7, local_intNum8, local_intNum9, local_intNum10, local_intValue;
	
	printf("Enter Number 1: ");      	       //Ask user to enter Number 1
	scanf("%d",&local_intNum1);      	       //Read Number 1 value from user
	printf("Enter Number 2: ");      	       //Ask user to enter Number 2
	scanf("%d",&local_intNum2);      	       //Read Number 2 value from user
	printf("Enter Number 3: ");      	       //Ask user to enter Number 3
	scanf("%d",&local_intNum3);      	       //Read Number 3 value from user
	printf("Enter Number 4: ");      	       //Ask user to enter Number 4
	scanf("%d",&local_intNum4);      	       //Read Number 4 value from user
	printf("Enter Number 5: ");      	       //Ask user to enter Number 5
	scanf("%d",&local_intNum5);      	       //Read Number 5 value from user
	printf("Enter Number 6: ");      	       //Ask user to enter Number 6
	scanf("%d",&local_intNum6);      	       //Read Number 6 value from user
	printf("Enter Number 7: ");      	       //Ask user to enter Number 7
	scanf("%d",&local_intNum7);      	       //Read Number 7 value from user
	printf("Enter Number 8: ");      	       //Ask user to enter Number 8
	scanf("%d",&local_intNum8);      	       //Read Number 8 value from user
	printf("Enter Number 9: ");      	       //Ask user to enter Number 9
	scanf("%d",&local_intNum9);      	       //Read Number 9 value from user
	printf("Enter Number 10: ");      	       //Ask user to enter Number 10
	scanf("%d",&local_intNum10);               //Read Number 10 value from user
	printf("Enter the value to search: ");     //Ask user to enter the value wants to search
	scanf("%d",&local_intValue);               //Read the value to search from user

	if(local_intNum1 == local_intValue)                  //Check if search value is the same number 1 value
		printf("Value is exist at element number 1");    //Print location of the value
	else if(local_intNum2 == local_intValue)             //Check if search value is the same number 2 value
		printf("Value is exist at element number 2");    //Print location of the value
	else if(local_intNum3 == local_intValue)             //Check if search value is the same number 3 value
		printf("Value is exist at element number 3");    //Print location of the value
	else if(local_intNum4 == local_intValue)             //Check if search value is the same number 4 value
		printf("Value is exist at element number 4");    //Print location of the value
	else if(local_intNum5 == local_intValue)             //Check if search value is the same number 5 value
		printf("Value is exist at element number 5");    //Print location of the value
	else if(local_intNum6 == local_intValue)             //Check if search value is the same number 6 value
		printf("Value is exist at element number 6");    //Print location of the value
	else if(local_intNum7 == local_intValue)             //Check if search value is the same number 7 value
		printf("Value is exist at element number 7");    //Print location of the value
	else if(local_intNum8 == local_intValue)             //Check if search value is the same number 8 value
		printf("Value is exist at element number 8");    //Print location of the value
	else if(local_intNum9 == local_intValue)             //Check if search value is the same number 9 value
		printf("Value is exist at element number 9");    //Print location of the value
	else if(local_intNum10 == local_intValue)            //Check if search value is the same number 10 value
		printf("Value is exist at element number 10");   //Print location of the value
	else                                                 //if the value not found
		printf("number not exist");                      //Print number not exist
}