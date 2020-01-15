// C++ program for implementation of Bubble sort 
#include <stdio.h> 
#include <stdlib.h>

void swap(float *xp, float *yp) 
{ 
	float temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

// A function to implement bubble sort 
void bubbleSort(float arr[], int n) 
{ 
	int i, j; 
	for (i = 0; i < n-1; i++)	 
	
	// Last i elements are already in place 
	for (j = 0; j < n-i-1; j++) 
		if (arr[j] > arr[j+1]) 
			swap(&arr[j], &arr[j+1]); 
} 

/* Function to print an array */
void printArray(float arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%f ", arr[i]); 
	printf("\n"); 
} 

// Driver program to test above functions 
int main() 
{ 
	int n = 10, i;
	float arr[n];
	for(i = 0; i < n; ++i)
		arr[i] = (float)rand()/(float)RAND_MAX;
	bubbleSort(arr, n); 
	printArray(arr, n);
	return 0; 
} 
