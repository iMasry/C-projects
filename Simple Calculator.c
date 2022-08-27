/*****************************************************************************************/
/*Title : Simple Calculator                                                              */
/*Description : ask the user to enter the operation ID and operands then print the result*/               
/*File Name : Lec4_Ass2.c                                                                */
/*Date : 9 Jul 2022                                                                      */
/*****************************************************************************************/

/*standard C library include*/
#include <stdio.h>

/*****************************************************************************************/
/*Function : math_floatAdd                                                               */
/*I/P Parameters : no Parameters                                                         */
/*Returns : no return                                                                    */
/*Description : show the sum of 2 numbers                                                */
/*****************************************************************************************/
void math_floatAdd(void);

/*****************************************************************************************/
/*Function : math_floatSub                                                               */
/*I/P Parameters : no Parameters                                                         */
/*Returns : no return                                                                    */
/*Description : show the substract of 2 numbers                                          */
/*****************************************************************************************/
void math_floatSub(void);

/*****************************************************************************************/
/*Function : math_floatMultiply                                                          */
/*I/P Parameters : no Parameters                                                         */
/*Returns : no return                                                                    */
/*Description : show the multiply of 2 numbers                                           */
/*****************************************************************************************/
void math_floatMultiply(void);

/*****************************************************************************************/
/*Function : math_floatDivide                                                            */
/*I/P Parameters : no Parameters                                                         */
/*Returns : no return                                                                    */
/*Description : show the division of 2 numbers                                           */
/*****************************************************************************************/
void math_floatDivide(void);

/*****************************************************************************************/
/*Function : math_intAnd                                                                 */
/*I/P Parameters : no Parameters                                                         */
/*Returns : no return                                                                    */
/*Description : show the and of 2 numbers                                                */
/*****************************************************************************************/
void math_intAnd(void);

/*****************************************************************************************/
/*Function : math_intOr                                                                  */
/*I/P Parameters : no Parameters                                                         */
/*Returns : no return                                                                    */
/*Description : show the or of 2 numbers                                                 */
/*****************************************************************************************/
void math_intOr(void);

/*****************************************************************************************/
/*Function : math_intNot                                                                 */
/*I/P Parameters : no Parameters                                                         */
/*Returns : no return                                                                    */
/*Description : show the Not of a number                                                 */
/*****************************************************************************************/
void math_intNot(void);

/*****************************************************************************************/
/*Function : math_intXor                                                                 */
/*I/P Parameters : no Parameters                                                         */
/*Returns : no return                                                                    */
/*Description : show the Xor of 2 numbers                                                */
/*****************************************************************************************/
void math_intXor(void);

/*****************************************************************************************/
/*Function : math_intReminder                                                            */
/*I/P Parameters : no Parameters                                                         */
/*Returns : no return                                                                    */
/*Description : show the Reminder of 2 numbers                                           */
/*****************************************************************************************/
void math_intReminder(void);

/*****************************************************************************************/
/*Function : math_floatIncrement                                                         */
/*I/P Parameters : no Parameters                                                         */
/*Returns : no return                                                                    */
/*Description : show the Increment of a number                                           */
/*****************************************************************************************/
void math_floatIncrement(void);

/*****************************************************************************************/
/*Function : math_floatDecrement                                                         */
/*I/P Parameters : no Parameters                                                         */
/*Returns : no return                                                                    */
/*Description : show the Decrement of a number                                           */
/*****************************************************************************************/
void math_floatDecrement(void);

void main(void) 							                         //Entry Point
{
	/*variable to read value from user*/
	int local_intOperation;      	                                 //Variable to read ID value from user

	printf("Enter operation ID: ");      	                         //Ask user to enter ID of operation
	scanf("%d",&local_intOperation);      	                         //Read operation ID from user
	
	switch(local_intOperation)                                       //Check ID operation
	{
		case 1:	                                                     //ID 1 for ADD operation
			math_floatAdd();                                         //Call math_floatAdd function
			break;                                                   //Close program
		case 2:	                                                     //ID 2 for SUBSTRACT operation
			math_floatSub();                                         //Call math_floatSub function
			break;                                                   //Close program
		case 3:	                                                     //ID 3 for MULTIPLY operation
			math_floatMultiply();                                    //Call math_floatMultiply function
			break;                                                   //Close program
		case 4:	                                                     //ID 4 for DIVIDE operation
			math_floatDivide();                                      //Call math_floatDivide function
			break;                                                   //Close program
		case 5:	                                                     //ID 5 for AND operation
			math_intAnd();                                           //Call math_intAnd function
			break;                                                   //Close program
		case 6:	                                                     //ID 6 for OR operation
			math_intOr();                                            //Call math_intOr function
			break;                                                   //Close program
		case 7:	                                                     //ID 7 for NOT operation
			math_intNot();                                           //Call math_intNot function
			break;                                                   //Close program
		case 8:	                                                     //ID 8 for XOR operation
			math_intXor();                                           //Call math_intXor function
			break;                                                   //Close program
		case 9:	                                                     //ID 9 for REMINDER operation
			math_intReminder();                                      //Call math_intReminder function
			break;                                                   //Close program
		case 10:	                                                 //ID 10 for INCREMENT operation
			math_floatIncrement();                                   //Call math_floatIncrement function
			break;                                                   //Close program
		case 11:	                                                 //ID 11 for DECREMENT operation
			math_floatDecrement();                                   //Call math_floatDecrement function
			break;                                                   //Close program
		default:	                                                 //When user enter wrong ID
			printf("Wrong Operation ID");                            //Show alert message the user entered a wrong ID
			break;                                                   //Close program
	}
}

/*math_floatAdd Function Implementation*/
void math_floatAdd(void)
{
	/*variables to read value from user and store in result variable*/
	float copy_floatOperand1, copy_floatOperand2, copy_floatResult;
	printf("Please enter the first number: ");                       //Ask user to enter the First Number
	scanf("%f",&copy_floatOperand1);                                 //Read the First Number from user
	printf("Please enter the second number: ");                      //Ask user to enter the Second Number
	scanf("%f",&copy_floatOperand2);                                 //Read the Second Number from user
	copy_floatResult = copy_floatOperand1 + copy_floatOperand2;      //ADD Operation
	printf("The Result= %0.2f", copy_floatResult);                   //Show the result
}
/*math_floatSub Function Implementation*/
void math_floatSub(void)
{
	/*variables to read value from user and store in result variable*/
	float copy_floatOperand1, copy_floatOperand2, copy_floatResult;
	printf("Please enter the first number: ");                       //Ask user to enter the First Number
	scanf("%f",&copy_floatOperand1);                                 //Read the First Number from user
	printf("Please enter the second number: ");                      //Ask user to enter the Second Number
	scanf("%f",&copy_floatOperand2);                                 //Read the Second Number from user
	copy_floatResult = copy_floatOperand1 - copy_floatOperand2;      //SUBSTRACT Operation
	printf("The Result= %0.2f", copy_floatResult);                   //Show the result
	
}
/*math_floatMultiply Function Implementation*/
void math_floatMultiply(void)
{
	/*variables to read value from user and store in result variable*/
	float copy_floatOperand1, copy_floatOperand2, copy_floatResult;
	printf("Please enter the first number: ");                       //Ask user to enter the First Number
	scanf("%f",&copy_floatOperand1);                                 //Read the First Number from user
	printf("Please enter the second number: ");                      //Ask user to enter the Second Number
	scanf("%f",&copy_floatOperand2);                                 //Read the Second Number from user
	copy_floatResult = copy_floatOperand1 * copy_floatOperand2;      //MULTIPLY Operation
	printf("The Result= %0.2f", copy_floatResult);                   //Show the result
}
/*math_floatDivide Function Implementation*/
void math_floatDivide(void)
{
	/*variables to read value from user and store in result variable*/
	float copy_floatOperand1, copy_floatOperand2, copy_floatResult;
	printf("Please enter the first number: ");                       //Ask user to enter the First Number
	scanf("%f",&copy_floatOperand1);                                 //Read the First Number from user
	printf("Please enter the second number: ");                      //Ask user to enter the Second Number
	scanf("%f",&copy_floatOperand2);                                 //Read the Second Number from user
	copy_floatResult = copy_floatOperand1 / copy_floatOperand2;      //DIVIDE Operation
	printf("The Result= %0.2f", copy_floatResult);                   //Show the result
}
/*math_intAnd Function Implementation*/
void math_intAnd(void)
{
	/*variables to read value from user and store in result variable*/
	int copy_intOperand1, copy_intOperand2, copy_intResult;
	printf("Please enter the first number: ");                       //Ask user to enter the First Number
	scanf("%d",&copy_intOperand1);                                   //Read the First Number from user
	printf("Please enter the second number: ");                      //Ask user to enter the Second Number
	scanf("%d",&copy_intOperand2);                                   //Read the Second Number from user
	copy_intResult = copy_intOperand1 & copy_intOperand2;            //AND Operation
	printf("The Result= %d", copy_intResult);                        //Show the result
}
/*math_intOr Function Implementation*/
void math_intOr(void)
{
	/*variables to read value from user and store in result variable*/
	int copy_intOperand1, copy_intOperand2, copy_intResult;
	printf("Please enter the first number: ");                       //Ask user to enter the First Number
	scanf("%d",&copy_intOperand1);                                   //Read the First Number from user
	printf("Please enter the second number: ");                      //Ask user to enter the Second Number
	scanf("%d",&copy_intOperand2);                                   //Read the Second Number from user
	copy_intResult = copy_intOperand1 | copy_intOperand2;            //OR Operation
	printf("The Result= %d", copy_intResult);                        //Show the result
}
/*math_intNot Function Implementation*/
void math_intNot(void)
{
	/*variable to read value from user and store in result variable*/
	int copy_intOperand, copy_intResult;
	printf("Please enter the number: ");                             //Ask user to enter the Number
	scanf("%d",&copy_intOperand);                                    //Read the Number from user
	copy_intResult = ~copy_intOperand;                               //NOT Operation
	printf("The Result= %d", copy_intResult);                        //Show the result
}
/*math_intXor Function Implementation*/
void math_intXor(void)
{
	/*variables to read value from user and store in result variable*/
	int copy_intOperand1, copy_intOperand2, copy_intResult;
	printf("Please enter the first number: ");                       //Ask user to enter the First Number
	scanf("%d",&copy_intOperand1);                                   //Read the First Number from user
	printf("Please enter the second number: ");                      //Ask user to enter the Second Number
	scanf("%d",&copy_intOperand2);                                   //Read the Second Number from user
	copy_intResult = copy_intOperand1 ^ copy_intOperand2;            //XOR Operation
	printf("The Result= %d", copy_intResult);                        //Show the result
}
/*math_intReminder Function Implementation*/
void math_intReminder(void)
{
	/*variables to read value from user and store in result variable*/
	int copy_intOperand1, copy_intOperand2, copy_intResult;
	printf("Please enter the first number: ");                       //Ask user to enter the First Number
	scanf("%d",&copy_intOperand1);                                   //Read the First Number from user
	printf("Please enter the second number: ");                      //Ask user to enter the Second Number
	scanf("%d",&copy_intOperand2);                                   //Read the Second Number from user
	copy_intResult = copy_intOperand1 % copy_intOperand2;            //REMINDER Operation
	printf("The Result= %d", copy_intResult);                        //Show the result
}
/*math_floatIncrement Function Implementation*/
void math_floatIncrement(void)
{
	/*variable to read value from user and store in result variable*/
	float copy_floatOperand, copy_floatResult;
	printf("Please enter the number: ");                             //Ask user to enter the Number
	scanf("%f",&copy_floatOperand);                                  //Read the Number from user
	copy_floatResult = ++copy_floatOperand;                          //INCREMENT Operation
	printf("The Result= %0.2f", copy_floatResult);                   //Show the result
}
/*math_floatDecrement Function Implementation*/
void math_floatDecrement(void)
{
	/*variable to read value from user and store in result variable*/
	float copy_floatOperand, copy_floatResult;
	printf("Please enter the number: ");                             //Ask user to enter the Number
	scanf("%f",&copy_floatOperand);                                  //Read the Number from user
	copy_floatResult = --copy_floatOperand;                          //DECREMENT Operation
	printf("The Result= %0.2f", copy_floatResult);                   //Show the result
}