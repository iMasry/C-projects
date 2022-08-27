/************************************************************************/
/*Title : Draw Pyramid                                                  */
/*Description : draw a pyramid of stars with height entered by the user */               
/*File Name : Lec3_Ass3.c                                               */
/*Date : 8 Jul 2022                                                     */
/************************************************************************/

/*standard C library include*/
#include <stdio.h>

void main(void) 							                                                      //Entry Point
{
	/*variables to read value from user*/
	int local_intHeight, local_intStep, local_intSpace, local_intStar, local_intCounter=1;
	
	printf("Please enter the hight of the pyramid: ");                                            //Ask user to enter Number of rows
	scanf("%d",&local_intHeight);                                                                 //Read rows from user
	
	for(local_intStep=1;local_intStep<=local_intHeight;local_intStep++)                           //Loop for draw rows of pyramid
	{
		for(local_intSpace=local_intHeight-1;local_intSpace>=local_intStep;local_intSpace--)      //Loop for draw spaces in every row expect the last one
		{
			printf(" ");                                                                          //Show spaces in pyramid
		}
		for(local_intStar=1;local_intStar<=local_intCounter;local_intStar++)                      //Loop for draw stars in every row
		{
			printf("*");                                                                          //Show stars in every row to draw the pyramid
		}
		local_intCounter+= 2;                                                                     //because stars increase by 2 in every new line
		printf("\n");                                                                             //make new row for pyramid
	}	
}