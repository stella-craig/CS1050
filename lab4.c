/******************************************
	Concepts to Practice: loops, the conditional (ternary) operator and the switch statement
	
	For the lab assignment, you may use any C statements you wish. However, you will get 
	bonus points if you correctly solve the problem without using the if statement of the 
	if/else statement.
	
	You are to write a program that prompts the user for two negative integers that are
	greater than or equal to -150. If the user enters an integer that is greater than -1 or
	less than -150, you must prompt the user again. You must continue checking and prompting 
	the user, until the user enters two integers that meet the specification. Call the integers 
	you get from the user Start and Limit respectively.
	
	Finally, print all integers starting with Start and ending with Limit (inclusive) and stepping
	by 3.
 * **************************************/

#include<stdio.h>
int main(void){
    int start; //initialize start variable
    int limit; //initialize limit variable
    int test = 0; //initialize test variable (for testing if variable is inside boundaries)

    printf("Please enter two negative integers that are less than zero but greater than or equal to -150.\n"); //instructions for user
    
    for(int a = 0; a<1; a++){ //if initial start variable is within our parameters, it will only go through the loop once
        printf("Enter Start: "); //asks user for start integer
        scanf("%d", &start);

        for(int sv = start; sv<-150; sv++){ //in the case that the start variable (sv: start variable) is less than -150 then set the test variable to a set number, and increment the sv so for loop wont be infinite
            test = -999;
        }
        for(int sv2 = start; sv2>-1; sv2--){ //in the case that start variable is greater than -1 (dont forget to decrement)
            test = -999;
        }

        switch(test){
            case -999: //case will only be true if start variable is outside of our boundaries
                a--; //makes the program go through the for loop again
                test = 0; //resets test variable so won't loop back through in case that start variable is inside our boundaries
                break;
            default:
                break;
        }

        //if you want to use an if statement instead, you would use the following code:
        //if (-150>start){ //start variable is less than -150 -> outside our boundaries
            //a--; //makes the program go through the for loop again
        //}
        //if (-1<start){ //start variable is more than -1 -> outside our boundaries
            //a--; //makes the program go through the loop again
        //}

    }

    for(int b = 0; b<1; b++){
        printf("Enter Limit: "); //asks user for limit integer
        scanf("%d", &limit);

        for(int lv = limit; lv<-150; lv++){ //in case that the limit variable (lv: limit variable) is less than -150 then set test variable to our set number (-999), and increment the lv so loop wont be infinite
            test = -999;
        }
        for(int lv2 = limit; lv2>-1; lv2--){ //in the case that the limit variable is greater than -1 (dont forget to decrement)
            test = -999;
        }

        switch(test){
            case -999: //case will only be true if start variable is outside our boundaries
                b--; //makes the program go through the loop again
                test = 0; //resets test variable so wont loop back through when limit variable is inside boundaries
                break;
            default:
                break;

        }

        //if you want to use an if statement instead, you would use the following code:
        //if (-150>limit){ //limit variable is less than -150 -> outside our boundaries
            //b--; //makes the program go through the loop again
        //}
        //if (-1<limit){ //limit variable is more than -1 -> outside our boundaries
            //b--; //makes the program go through the loop again
        //}
        
    } //now we know that the start and limit variables are within our boundaries
    //we can go ahead and start printing our output

    for(int i = start; i<=limit; i=i+3){ //starting at our start variable, we will print each integer value, increasing the value by 3, until we reach the value of our limit variable
        printf("%d ", i);
    }

    printf("\n"); //new line for formatting

    return 0;
}
