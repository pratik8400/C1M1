/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <Getting along with C programming >
 *
 * <Add Extended Description Here>
 *
 * @author <Pratik Honnakore>
 * @date <07/08/2020 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)



void main(void) {

  	int test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                      114, 88,   45,  76, 123,  87,  25,  23,
                      200, 122, 150, 90,   92,  87, 177, 244,
                      201,   6,  12,  60,   8,   2,   5,  67,
                        7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
	
	print_statistics(test);
  	print_array(test);
  		

}
/* Add other Implementation File Code Here */
// main function that doesn't receive any parameter and 
// returns integer a median value. 

/* This function prints out the sorted array */
int print_array(int test[]){
    printf("The sorted Array (largest to smallest) is\n");
    int i;
    for(i=0;i<SIZE;i++){
      printf("%d\t", test[i]);
}
    printf("\n");
    return 0;
}

/* This function is used for swap elements */
void swaping_elements(int *c, int *d){
	int temp;
	temp = *c;
	*c = *d;
	*d = temp;
}

/* This function is used for sorting of array(bubble sort) */
void sorting_of_array(int test[],int n) { 
   int i,j,temp;

   for(i = 0;i < n-1;i++) {
      for(j = 0;j < n-i-1;j++) {
         if(test[j] < test[j+1])
            swaping_elements(&test[j],&test[j+1]);
      }
   }
}
/* This function will calculate the median from an array */
int find_median(int test[]) 
{ 
   int median = SIZE;  

   sorting_of_array(test, SIZE);
   median = ((median + 1)/2);
   printf("Median is %d\n", test[median]);
    return 0; 
} 

/* This function will calculate the mean from an array */
int find_mean(int test[]){
	int sum, i;
	sum = 0;
	for(i=0; i<SIZE; i++)
{
		sum += test[i];
}
	printf("The mean is %d\n", sum/=SIZE);	
	return(0);
}
/* This function will calculate the max from an array */	
int find_maximum(int test[]){
	
	sorting_of_array(test, SIZE);
	printf("The maximum element is %d\n", test[0]);
	return 0;
}

/* This function will calculate the minimum from an array */
int find_minimum(int test[]){
	
	sorting_of_array(test, SIZE);
	printf("The minimum element is %d\n", test[SIZE-1]);
	return 0;
}
/* This function will print statistics of an array */
int print_statistics(int test[]){
	
	printf("The statistics of the given array is\n");
	find_median(test);
	find_mean(test);
	find_minimum(test);
	find_maximum(test);
	return 0;
}
