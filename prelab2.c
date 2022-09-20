/*	Concepts focused on: simple input/output, integer variables, arithmetic operators

	For this prelab assignment, write a C program that reads in two integer numbers from user input.
	Save the values of these numbers in two variables called X and Y.
	Print the values of X and Y.
	Print the value of X multiplied times Y.
	Print the value of X divided by Y.
	Print the value of X plus 1, quantity times Y.
	Print the values of X and Y again to show that they did not change.
*/

#include<stdio.h>

int main(void)
    {
        int integer1;	//Initialize integer that will be known to user as X
        int integer2;	//Initialize integer that will be known to user as Y
                
        printf("Enter 2 integers separated by spaces:\n"); //Prompts user for 2 integers
        scanf("%d", &integer1);	//Save first number as X
        scanf("%d", &integer2);	//Save second number as Y
        
		//Repeat the user's integers back to them
        printf("\n*** Initial values *** \n");	
        printf("X = %d\n", integer1);
        printf("Y = %d\n", integer2);
        
		//Arithmetic operations
        int xtimesy = integer1 * integer2;			//Multiplication
        int xdivy = integer1 / integer2;			//Division
        int x1timey = ( integer1 + 1 ) * integer2;	//X + 1 multiplied by Y

		//Print the new calculated values, as well as the OG variables
        printf("\n*** Calculated values ***\n");
        printf("X times Y = %d\n", xtimesy);
        printf("X divided by Y = %d\n", xdivy);
        printf("X plus 1, quantity times Y = %d\n", x1timey);
        printf("*** Final values ***\n");
        printf("X = %d\n", integer1);
        printf("Y = %d\n", integer2);

        return 0; //main is an int so return an int
    }

