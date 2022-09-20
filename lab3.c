/**************************************************
	Concepts to Practice: if, if/else, while, increment/decrement operators
	
	You are to write a program that goes through all odd integers from 1 through 51
	in order from the greatest integer down to the least integer. As you move through
	these integers, if the current integer is divisible by 3, print "T". If the current
	integer is divisible by 5, print "F". If the current integer is divisible by both
	5 and 3, print "TF". If the current integer is divisible by neither 5 nor 3,
	print the integer.
 * *******************************************/

#include<stdio.h>

int main(void){
    
    int counter = 51; //establish counter variable

    while(counter >= 1){ //because counter is going down from 51 to 1, counter must be greater that or equal to 1

        if(counter % 5 == 0){ //if counter is divisible by 5
            if(counter % 3 == 0){ //if counter is dividsible by both 5 and 3
                printf("TF\n"); //divisible by both 5 and 3, print TF
            }
            else{ //counter is divisible by 5 but not 3
                printf("F\n");
            }
        } //ends first if statement

        else{ //if counter is not divisible by 5
            if(counter % 3 == 0){ //if counter is divisble by 3 but not 5
                printf("T\n"); 
                }
                else{ //counter is not divisible by 3 nor 5
                    printf("%d\n", counter); //print the integer
                }
        }
        counter--; //only want to do odd numbers so decrease counter by 2
        counter--;
    }

    return 0;

}

