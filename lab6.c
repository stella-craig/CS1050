/*******************************
	Concepts to Practice: arrays, passing arrays to functions
	
	For the lab assignment, you need to declare 3 arrays in your main() function.
	By passing these 3 arrays to functions that you write, you should be able to 
	initialize two of them to the specified values, multiply their values together 
	to form the 3rd array, and print all of these arrays. 
	
	Important note:  Global variables are not allowed! 
	
	In your main() function, you can ONLY do the following things: 
		• Declare variables 
		• Call the printf() function 
		• Call any function that you write (including assigning a variable to the 
		return value of your function if you wish) 
	
	Overall, you program should: 
		• Declare 3 integer arrays that have 100 elements each. 
		• Initialize an array to hold the values 0,3,6,...,30 (inclusive) 
		• Initialize a second array to hold the values 3,8,13,...,53 (inclusive)
		• Multiply the first value of the first array with the first value of the 
		second array, the 2nd value of the first array with the 2nd value of the 
		second array, etc. and place the results in the corresponding elements of 
		the output array. 
		• Print the two “input” arrays as well as the “output” array with 
		corresponding elements on the same lines (as shown in the sample output) 
		• Do this procedure again with the 2 input arrays having values 
		22,20,18,16,...,0 and 84,77,70,63,...,7 respectively (note that you will 
		call your function to multiply the two together as well, and will print 
		everything out again too). 
	
	Honors Extension: Write a second function that instead of multiplying the 
	corresponding elements of each array, multiplies the first element of array 
	1 with the last element of array 2, the second element of array 1 with the 
	second to the last element of array 2, and so on.  Print your “reverse 
	multiply” results after each “regular multiply” result.
 * *****************************/

#include <stdio.h>

void PrintArray(int array1[], int array2[], int array3[], int size){
    for (int i = 0; i < size; i++){
        printf("\tArray 1 Element %2d = %2d ", i, array1[i]);
        printf("\tArray 2 Element %2d = %2d ", i, array2[i]);
        printf("\tArray 3 Element %2d = %2d ", i, array3[i]);
        printf("\n");
    }
    printf("\n");
}

int InitializeArray(int array[], int begin, int end, int increment){
    //Keep track of index
    int index = 0;

    //Ternary checks to see which direction loop should be checking for, saves code repetition
    //over using a flag variable and two separate for loops
    for (int i = begin; (increment < 0 ? i >= end : i <= end); i += increment){
        //Set the value then increment the index (postincrement)
        array[index++] = i;
    }

    //Return # of elements initialized
    return index;
}

void MultiplyArrays(int array1[], int array2[], int outputArray[], int size, int reverse){
    /*Takes array1 and array2 and multiplies the values, outputting into outputArray.
     * If reverse flag is set to nonzero, then the multiplication starts from first to last on array one
     * and last to first on array 2. */
    if(reverse){
        int x, y;
        //Loop to grab the value from each side of array 1 and 2 to multiply them
        for(int i = 0; i < size; i++){
            x = array1[i];
            y = array2[(size - 1) - i];

            outputArray[i] = x * y;
        }
    }

    //Loop to multiply indexes i of array 1 and array 2 together
    else{
        for (int i = 0; i < size; i++){
            outputArray[i] = (array1[i] * array2[i]);
        }
    }
}

int main(void){
    int firstArr[100];
    int secondArr[100];
    int thirdArr[100];
    int size;

    //Initialize both arrays and get size
    size = InitializeArray(firstArr, 0, 30, 3);
    InitializeArray(secondArr, 3, 53, 5);
    //Warning: This code assumes that both first and second arrays have same number of elements.
    
    //Multiply array function calls
    MultiplyArrays(firstArr, secondArr, thirdArr, size, 0);
    printf("First Arrays:\n\t11 elements in first input array\n\t11 elements in second input array\n");
    PrintArray(firstArr, secondArr, thirdArr, size);

    //Reverse
    MultiplyArrays(firstArr, secondArr, thirdArr, size, 1);
    printf("First Arrays Reverse Multiplied:\n");
    PrintArray(firstArr, secondArr, thirdArr, size);

    //Repeat Program with Second set of numbers
    //Initialize both arrays and get size
    size = InitializeArray(firstArr, 22, 0, -2);
    InitializeArray(secondArr, 84, 7, -7);

    //Multiply function calls
    MultiplyArrays(firstArr, secondArr, thirdArr, size, 0);
    printf("Second Arrays:\n");
    PrintArray(firstArr, secondArr, thirdArr, size);

    //Reverse
    MultiplyArrays(firstArr, secondArr, thirdArr, size, 1);
    printf("Second Arrays Reverse Multiplied:\n");
    PrintArray(firstArr, secondArr, thirdArr, size);
}

