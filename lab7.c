/**************************
 * Course:      CS1050
 * Semester:    Spring 2022
 * Date:        March 11, 2022
 * Lab:         Lab 7
 * Author:      Stella Craig
 * Pawprint:    smc6fd
 * ************************/

#include <stdio.h>

void GetIntArray(int* outputArray, int* count){
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", count);
    //Set up array with pointer arithmetic because no indexing allowed
    for(int i = 0; i < *count; i++){
        printf("Enter element #%d: ", i);
        scanf("%d", (outputArray + i));
    }
}

void PrintArray(int* array, int count){
    printf("\nHere are the %d elements of your array:\n", count);
    //more pointer arithmetic because no indexing in rubric
    for(int i = 0; i < count; i++){
        printf("\tElement %d = %d\n", i, *(i + array));
    }
}

int TotalArray(int* array, int count){
    int total = 0;
    //pointer arithmetic
    for(int i = 0; i < count; i++){
        total += *(array + i);
    }
    return total;
}

float AvgArray(int* array, int count){
    int total = 0;
    //pointer arithmetic
    for(int i = 0; i < count; i++){
        total += *(array + i);
    }
    return (float) total / count;
}

int main(void){
    int count1 = 0;
    int count2 = 0;

    //assume array would be no larger than 256
    int firstArray[256] = {0};
    int secondArray[256] = {0};

    printf("Welcome to Lab 7!\n");

    //First Array setup and output
    GetIntArray(firstArray, &count1);
    PrintArray(firstArray, count1);

    int total1 = TotalArray(firstArray, count1);

    printf("Total of array = %d\n", total1);
    printf("Average of array = %.2f\n", AvgArray(firstArray, count1));

    //Second array setup
    GetIntArray(secondArray, &count2);
    PrintArray(secondArray, count2);

    int total2 = TotalArray(secondArray, count2);

    //Combined Array output
    printf("Total of array and array 2 = %d\n", (total1+total2));
    printf("Average of array and array 2 = %.2f\n", (float)(total1 + total2) / (count1 + count2));

    return 0;
}

