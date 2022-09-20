/**************************
	Concepts to Practice: user-written functions
	
	You are to write at least two functions for this lab assignment and test them as shown
	in the sample output. You may not include math.h in your program.
	
	The first function rounds floating point numbers to integers. You are to call this function 
	with the following values to test it: 1.1, 1.2, 1.3, 1.4, 1.45, 1.5, 1.51, 2371.491, 2371.5.
	Recall from class that simply casting a floating point value to an integer (that is "(int)"
	will truncate the value. Thus, 1.52 would become 1 as an int. Rounding should instead give 
	the nearest integer and so 1.52 would become 2 as an int (since 2 is closer to 1.52 than 1).
	Ties (values that are equally close to two integers) should be “rounded up” to the higher 
	of the two possible integers. Protoype: int RoundFloatToInt(float f);
	
	Non-Honors: The second function rounds an integer to the nearest multiple of 3.  So, 1 is
	rounded to 0 (since it is closer to 0 than to 3), 2 is rounded to 3 (since it is closer to
	3 than to 0), 4 is rounded to 6 (since it is closer to 6 than to 3), and so on.  Test this
	function with the following values: 1,2,3,4,5,6. Prototype: int RoundIntToNearestMultipleOf3(int i);
	
	Honors: The second function rounds an integer to the nearest multiple of a variable 
	called factor (that is, it rounds to the nearest multiple of an arbitrary integer).  So,
	1 is rounded to 0 when factor is 3 (since it is closer to 0 than to 3), 2 is rounded to 
	3 when factor is 3 (since it is closer to 3 than to 0), 15 is rounded to 11 when factor 
	is 11 (since it is closer to 11 than to 22), and so on. Prototype: int RoundIntToNearest(int i, int factor); 
 * ************************/

#include <stdio.h>

int RoundFloatToInt(float f) //round a float to the nearest integer
{
    f = f + 0.5; //add .5 to float
    return f; //return an int, truncating the float
}

void PFloatToInt(float x) //print showing the float being rounded to the nearest integer
{
    printf("%.2f rounded to %d\n", x, RoundFloatToInt(x));
}

int RoundIntToNearestMultipleOf3(int i) //round an integer to it's nearest multiple of 3
{
    int counter = 2; //counter starts at 2 because that is where the rounded number increases
    int multiple = 0; //multiple counts by 3 for result
    while(counter<=i){ //while int i is greater than 1, increase the output by 3 as int i increases by 3
        multiple+=3;
        counter+=3;
    }
    return multiple;
}

void PMultOf3 (int x) //print showing the int being rounded to the nearest multiple of 3
{
    printf("%d rounded to the nearest multiple of 3 = %d\n", x, RoundIntToNearestMultipleOf3(x));
}

int RoundIntToNearest(int i, int factor) //rounds to the factor
{
    int counter = RoundFloatToInt(factor/2);
    int multiple = 0;
    while (counter<=i){
        multiple+=factor;
        counter+=factor;
    }
    return multiple;
}

void PRoundToNearest (int i, int factor) //prints RoundIntToNearest in sentence
{
    printf("%d rounded to nearest multiple of %d = %d\n", i, factor, RoundIntToNearest(i, factor));
}

int main(void) //main function
{
    printf("**** Testing RoundFloatToInt\t\t****\n");
    //print "(number) rounded to (rounded number)"
    PFloatToInt(1.10);
    PFloatToInt(1.20);
    PFloatToInt(1.30);
    PFloatToInt(1.40);
    PFloatToInt(1.45);
    PFloatToInt(1.50);
    PFloatToInt(1.51);
    PFloatToInt(2371.49);
    PFloatToInt(2371.50);
    printf("********************************************\n\n");

    printf("**** Testing RoundIntToNearest()\t****\n");
    //print "(number) rounded to the nearest multiple of 3 = (rounded number)"
    PMultOf3(1);
    PMultOf3(2);
    PMultOf3(3);
    PMultOf3(4);
    PMultOf3(5);
    PMultOf3(6);
    
    printf("HONORS:\n"); //im not in honors but did that section anyway
    //print "(number rounded to nearest multiple of (another number) = (rounded number)"
    PRoundToNearest(4, 10);
    PRoundToNearest(5, 10);
    PRoundToNearest(9, 10);
    PRoundToNearest(14, 10);
    PRoundToNearest(15, 10);
    PRoundToNearest(15, 11);
    printf("********************************************\n");

    return 0;
}
