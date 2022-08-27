/*****************************************************************************************/
/*Title : Maximum and Minimum of array                                                   */
/*Description : print the maximum and minimum in 10 numbers of array                     */               
/*File Name : Lec5_Ass1.c                                                                */
/*Date : 21 Jul 2022                                                                     */
/*****************************************************************************************/

/*standard C library include*/
#include <stdio.h>

void main(void) 							                          //Entry Point
{
	/*array and variables to read values from user and store them*/
	int local_intArr[10], local_intMax, local_intMin;
	
	/*for loop to ask the user to enter 10 values and save them in the array*/
	for(int i=0 ; i < 10 ; i++)
	{
		printf("Please Enter Number %d: ",i+1);      	              //Ask user to enter Numbers
		scanf("%d",&local_intArr[i]);      	                          //Read Numbers value from user
		/*Intialize variable in first loop only*/
		if(i == 0)
		{
			local_intMax = local_intArr[0];                           //The maximum number the first value in array
			local_intMin = local_intArr[0];                           //The minimum number the first value in array
		}
		/*Check the Maximum*/
		if(local_intMax <= local_intArr[i])
			local_intMax = local_intArr[i];
		/*Check the Minimum*/
		if(local_intMin >= local_intArr[i])
			local_intMin = local_intArr[i];
		
	}
	
	printf("The maximum number: %d\n",local_intMax);      	                                      //Show the Maximum Number
	printf("The minimum number: %d\n",local_intMin);      	                                      //Show the Minimum Number
}