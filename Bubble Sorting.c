/*****************************************************************************************/
/*Title : Bubble Sorting Pass by address                                                 */
/*Description : Bubble sorting algorithm by using pointers                               */               
/*File Name : Lec6_Ass1.c                                                                */
/*Date : 23 Jul 2022                                                                     */
/*****************************************************************************************/

/*standard C library include*/
#include <stdio.h>

/*******************************************************************************************************/
/*Function : algorithm_voidBuuble                                                                      */
/*I/P Parameters : int *ptr, int size                                                                  */               
/*Returns : no return                                                                                  */
/*Description : print sorted array by using bubble sorting algorithm                                   */
/*******************************************************************************************************/
void algorithm_voidBuuble(int *ptr, int size);

void main(void) 							                           //Entry Point
{
	/*array to store values*/
	int local_intArr[5] = {23,12,66,71,44};
	
	printf("UnSorted Array:\n");
	/*for loop to print the array*/
	for(int i = 0 ; i < 5 ; i++)
		printf("\t%d",local_intArr[i]);
	
	algorithm_voidBuuble(local_intArr, 5);                             //Call algorithm_voidBuuble function
}
/*algorithm_voidBuuble Function Implementation*/
void algorithm_voidBuuble(int *ptr, int size)
{
	int temp = 0;
	
	for(int i = 0; i < (size - 1); i++)
	{
		for(int j = 0; j < (size - 1 - i); j++)
		{
			/*Swapp two elements*/
			if(ptr[j] > ptr[j + 1])                                   //check if the next number lower than the past one
			{
				temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = temp;
			}
		}
	}
	
	printf("\nSorted Array:\n");
	/*for loop to print the array*/
	for(int i = 0 ; i < size ; i++)
		printf("\t%d",ptr[i]);
}