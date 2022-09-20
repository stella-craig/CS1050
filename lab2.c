/********************************
	Concepts to Practice: simple input/output, integer variables, arithmetic operators
	
	For the lab assignment, write a C program that reads in four integer numbers
	from user input that will be entered on the same line and separated by a space.
	The first integer should be called A, the second B, the third C, and the fourth D.
	
	Print the following:
		Print the values of A, B, C, and D.
		Print the value of the sum of B and C.
		Print the value of the produce of A and D.
		Print the value of the integer quotient of A divided by C.
		Print the value of the integer remainder of C divided by D.
		Print the value of the quantity A times C divided by (integer division) the quanitity B plus D.
	
	If you are in the honors secion of the course, please also print the following:
		Print the exact quotient of each of the 4 values (A, B, C, and D) divided by 2.
		You may only use integer variables. Do not use cast.
 * *****************************/

#include<stdio.h>

int main(void)
{
    /*intialize the main vairable*/
    int varA;
    int varB;
    int varC;
    int varD;

    printf("Enter 4 integers (A,B,C,D) separated by spaces: "); //user prompt
    scanf("%d%d%d%d", &varA, &varB, &varC, &varD); //read user inputed variables

    //read back values
    printf("*** Initial values ***\n");
    printf("A = %d\nB = %d\nC = %d\nD = %d\n", varA, varB, varC, varD);

    int sumBC = varB + varC; //sum of B and C
    int productAD = varA * varD; //product of A and D
    int quotAC = varA / varC; //integer quotient of A divided by C
    int remainCD = varC % varD; //integer remainder of C divided by D
    int pACdivBplusD = ( varA * varC ) / ( varB + varD ); //product of A and C divided by the quantity sum of B and D

    printf("\n*** Calculated values ***\n");
    printf("The sum of B and C = %d\n", sumBC);
    printf("The product of A and D = %d\n", productAD);
    printf("The integer quotient of A divided by C = %d\n", quotAC);
    printf("The integer remainder of C divided by D = %d\n", remainCD);
    printf("The product of A and C divided by the quantity sum of B and D = %d\n", pACdivBplusD);

    printf("*Honors:\n"); //I'm not in honors but had extra time
    printf("\tA/2=%d", (varA/2));
    if(varA % 2)
        printf(".5");
    printf("\n\tB/2=%d", (varB/2));
    if(varB % 2)
        printf(".5");
    printf("\n\tC/2=%d", (varC/2));
    if(varC % 2)
        printf(".5");
    printf("\n\tD/2=%d", (varD/2));
    if(varD % 2) //examples on Lab 2 doc had typos where even numbers would include the .5 and odd numbers wouldn't for D. If this was what we wanted to do, we would instead write "if(varD % 2 != 0)"
        printf(".5");
    printf("\n");

    return 0;
}

