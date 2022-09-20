/*
	Concepts to Practice: if, if/else, while, increment/decrement operators
	
	For the prelab assignment, you are to write a program that prints all integers 
	from 1 through 10 using a while loop. Before printing each integer, print whether
	it is even or odd.
*/



#include <stdio.h>

int main(void)
{
    int i = 1; //establish the integer that will be incrementing and be determined if odd or even
    int totalNumber = 10; //establish the number, starting at 1, that the program will increment towards and stop at (can be changed in case you want more or less than 10)

    while (i <= totalNumber )
    {
        int a = i; //establish temp variable to make sure i is not altered

        if ( (a % 2) != 0){
            printf( "odd - %d\n", i);
        }
        else {
            printf( "even - %d\n", i);
        }

        i++;
    }

    return 0;
}

