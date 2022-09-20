/*
	Concepts to Practice: for loops and/or do/while statements, switch and/or the ternary operator
	
	For the prelab assignment, you may not use the while statement, the do/while statement,
	the if statement, nor the if/else statement. You may wish to try to do this using the
	ternary operator or the switch statement.
	
	First, prompt the user for an integer and call it Limit. Using a for loop, you are to 
	write a program that prints all perfect cube integers from 0 through Limit (the number
	the user entered) inclusive. If the resultant number is divisible by three, print an
	asterisk after that number.
*/

#include <stdio.h>

int main(void)
{
    int limit;	//initalize the variable limit
    printf("Please enter a limit: \n");	//prompt user for the limit
    scanf("%i", &limit);	//set users input as limit

	//starting at 0, while i^3 is less than the limit, run through the loop, an i+=1
	//we use i^3 to directly use all perfect cubes, instead of running through the numbers 0 to the limit and testing if its a perfect cube
    for (int i = 0; i*i*i < limit; i++){ 
        int remainder = i*i*i % 3 ;		//find the remainder

        switch(remainder){
            case 0:						//if remainder is zero, i^3 is divisible by 3
                printf("%d*\n", i*i*i);	//print an asterisk after the number
                break;
            default:					//if the reaminder isn't zero, i^3 isn't divisible by 3
                printf("%d\n", i*i*i);	//just print the perfect cube, without an asterisk
                break;
        }
    }
}
