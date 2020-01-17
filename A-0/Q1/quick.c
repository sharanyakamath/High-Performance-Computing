/* C implementation QuickSort */
#include<stdio.h> 
#include<stdlib.h>

// A utility function to swap two elements 
void swap(float* a, float* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

/* This function takes last element as pivot, places 
the pivot element at its correct position in sorted 
	array, and places all smaller (smaller than pivot) 
to left of pivot and all greater elements to right 
of pivot */
int partition (float arr[], int low, int high) 
{ 
	float pivot = arr[high]; // pivot 
	int i = (low - 1); // Index of smaller element 

	for (int j = low; j <= high- 1; j++) 
	{ 
		// If current element is smaller than the pivot 
		if (arr[j] < pivot) 
		{ 
			i++; // increment index of smaller element 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 

/* The main function that implements QuickSort 
arr[] --> Array to be sorted, 
low --> Starting index, 
high --> Ending index */
void quickSort(float arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
		/* pi is partitioning index, arr[p] is now 
		at right place */
		int pi = partition(arr, low, high); 

		// Separately sort elements before 
		// partition and after partition 
		quickSort(arr, low, pi - 1); 
		quickSort(arr, pi + 1, high); 
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
		arr[i] = rand()%1000;
		// arr[i] = (float)rand()/(float)RAND_MAX;
	quickSort(arr, 0, n-1); 
	printArray(arr, n);
	return 0; 
} 

