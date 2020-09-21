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



int main(void) {

  	int test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                      114, 88,   45,  76, 123,  87,  25,  23,
                      200, 122, 150, 90,   92,  87, 177, 244,
                      201,   6,  12,  60,   8,   2,   5,  67,
                        7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  	print_array(test);
  	find_median(test);
	find_mean(test);
	
  	return 0;

}
/* Add other Implementation File Code Here */
// main function that doesn't receive any parameter and 
// returns integer a median value. 

/* This function prints out the array */
int print_array(int test[]){
    printf("The Array is\n");
    int i;
    for(i=0;i<SIZE;i++){
      printf("%d\t", test[i]);
}
    return 0;
}

void swaping_elements(int *c, int *d){
	int temp;
	temp = *c;
	*c = *d;
	*d = temp;
}


void sorting_of_array(int test[],int n) { 
   int i,j,temp;

   for(i = 0;i < n-1;i++) {
      for(j = 0;j < n-i-1;j++) {
         if(test[j] > test[j+1])
            swaping_elements(&test[j],&test[j+1]);
      }
   }
}
int find_median(int test[]) 
{ 
   int median = SIZE;  

   sorting_of_array(test, SIZE);
   median = ((median + 1)/2) -1;
   printf("\nMedian is %d\n", test[median]);
    return 0; 
} 

int find_mean(int test[]){
	int sum, i;
	sum = 0;
	for(i=0; i<SIZE; i++)
{
		sum += test[i];
}
	printf("\nThe mean is %f\n", sum/(float)SIZE);	
	return(0);
}
