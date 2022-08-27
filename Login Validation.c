/***********************************************************************/
/*Title : Login Validation                                             */
/*Description : check ID and password of user for only 3 attempts      */               
/*File Name : Lec3_Ass2.c                                              */
/*Date : 8 Jul 2022                                                    */
/***********************************************************************/

/*standard C library include*/
#include <stdio.h>

void main(void) 							                                     //Entry Point
{
	/*variables to read values from user*/
	int local_intID, local_intPassword, local_intCounter;
	
	printf("Please enter your ID: ");             //Ask user to enter his ID
	scanf("%d",&local_intID);                     //Read ID from user
	
/***************************************/
/*User: Ahmed   ID:1234   Password 7788*/
/*User: Amr     ID:5678   Password 5566*/
/*User: Wael    ID:9870   Password 1122*/
/***************************************/
	
 	if(local_intID == 1234 || local_intID == 5678 || local_intID == 9870)       //Check ID Validation
	{
		printf("Please enter your password: ");                                 //Ask user to enter password
		
		for(local_intCounter=1;local_intCounter<=3;local_intCounter++){         //Loop for checking password 3 times
			scanf("%d",&local_intPassword);                                     //Read password from user
			if(local_intPassword == 7788)                                       //Check Password Validation
			{
				printf("Welcome Ahmed");                                        //Show username when ID and password are correct
				break;                                                          //out of check password loop
			}
			if(local_intPassword == 5566)                                       //Check Password Validation
			{
				printf("Welcome Amr");                                          //Show username when ID and password are correct
				break;                                                          //out of check password loop
			}
			if(local_intPassword == 1122)                                       //Check Password Validation
			{
				printf("Welcome Wael");                                         //Show username when ID and password are correct
				break;                                                          //out of check password loop
			}
			if(local_intCounter==3)                                             //Check Counter of attempts
			{
				printf("Incorrect password fo 3 times, No more tries");         //Show no more tries
				break;                                                          //out of check password loop due to consume 3 attempts 
			}
			printf("Try again: ");                                              //Show alert to try again when password is incorrect
		}
		
	} else
		printf("You are not registered");                                       //Show alert when ID not found

}