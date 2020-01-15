// C program for implementation of selection sort 
#include <stdio.h> 
#include <stdlib.h>

void swap(float *xp, float *yp) 
{ 
	float temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

void selectionSort(float arr[], int n) 
{ 
	int i, j, min_idx; 

	// One by one move boundary of unsorted subarray 
	for (i = 0; i < n-1; i++) 
	{ 
		// Find the minimum element in unsorted array 
		min_idx = i; 
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[min_idx]) 
			min_idx = j; 

		// Swap the found minimum element with the first element 
		swap(&arr[min_idx], &arr[i]); 
	} 
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
	selectionSort(arr, n); 
	printArray(arr, n);
	return 0; 
} 
