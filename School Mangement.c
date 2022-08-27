/*******************************************************************************************************/
/*Title : School Mangement                                                                             */
/*Description : school has 3 classes each class contains 10 students system display some statistics    */               
/*File Name : Lec5_Ass2.c                                                                              */
/*Date : 21 Jul 2022                                                                                   */
/*******************************************************************************************************/

/*Global variables to use this values in multi functions*/
int global_intPass= 0, global_intFail= 0, global_intHigh= 0, global_intLow= 100, global_intSum= 0;

/*******************************************************************************************************/
/*Function : math_voidStatics                                                                          */
/*I/P Parameters : int copy_arr[10]                                                                    */               
/*Returns : no return                                                                                  */
/*Description : returns No. of passed & failed students, highest & lowest grades and the sum of grades */
/*******************************************************************************************************/
void math_voidStatics(int copy_arr[10]);

/*standard C library include*/
#include <stdio.h>

void main(void) 							                          //Entry Point
{
	/*array and variables to read values from user and store them*/
	int local_intClass1[10] = {20,75,84,70,99,42,64,38,44,68};
	int local_intClass2[10] = {54,50,89,41,72,83,94,28,47,63};
	int local_intClass3[10] = {98,79,46,88,23,60,94,24,33,47};
	float local_floatAverage;
	
	math_voidStatics(local_intClass1);                                            //Call math_voidStatics for Class1
	math_voidStatics(local_intClass2);                                            //Call math_voidStatics for Class2
	math_voidStatics(local_intClass3);                                            //Call math_voidStatics for Class3
	
	local_floatAverage = (float)global_intSum/30;                                 //Calculate the Average of grades
	
	printf("Number of passed students: %d\n",global_intPass);      	              //Show the No. of passed students
	printf("Number of failed students: %d\n",global_intFail);      	              //Show the No. of failed students
	printf("Highest grade: %d\n",global_intHigh);      	                          //Show the highest grade in the school
	printf("Lowest grade: %d\n",global_intLow);      	                          //Show the lowest grade in the school
	printf("Average grade: %0.2f",local_floatAverage);      	                  //Show the average of grades in the school 
}

/*math_voidStatics Function Implementation*/
void math_voidStatics(int copy_arr[10])
{
	/*for loop to check in array values*/
	for(int i=0 ; i < 10 ; i++)
	{
		/*Check the Pass students*/
		if(copy_arr[i] >= 50)
			global_intPass++;
		/*Check the Fail students*/
		if(copy_arr[i] < 50)
			global_intFail++;
		/*Check the Highest degree*/
		if(copy_arr[i] >= global_intHigh)
			global_intHigh = copy_arr[i];
		/*Check the Lowest degree*/
		if(copy_arr[i] <= global_intLow)
			global_intLow = copy_arr[i];
		/*Calculate the sum of grades*/
		global_intSum += copy_arr[i];
	}
}
