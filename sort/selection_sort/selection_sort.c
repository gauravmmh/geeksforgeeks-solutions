/******************************************************************************
 *
 * Geeksforgeeks-solutions
 *
 * Name: sort/selection_sort/selection_sort.c
 * Created: Gaurav Mahajan <gauravmmh@gmail.com>
 *
 ******************************************************************************/

#include <stdio.h>

/* Number of elements in array */
#define ARR_NELEMENTS 10

/**
 * swap(): This function swaps the interger in an array.
 *
 * @arr: The array whose elements to be swapped.
 * @a: index of first element to be swapped.
 * @b: index of second element to be swapped.
 *
 */
void
swap(int arr[], int a, int b)
{
	int temp;
	temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

/**
 *		-: Selection Sort :-
 *
 * In selection sort we divide the array into two parts.
 * one is sorted part (left side part of array) and another in unsortted part
 * (right side part of array). The we select a minimum number from the
 * unsorted part and we add it at the end or sorted part. So gradually the
 * sorted parts keeps growing and unsorted part keeps shrinking. At the end we
 * get completely sorted array.
 *
 */

/**
 * selection_sort(): This function sorts and array of integers using selection
 *		     sorting algorithm.
 *
 * @arr: An array to be sorted.
 * @n: number of elements in array.
 *
 */
int selection_sort(int arr[], int n)
{
	int i, j, min_index;

	for(i = 0; i < n ;  i++) {

		min_index = i;
		/* Find minimum in the unsorted part i.e from i+1 to n -1 */
		for(j = i+1; j < n; j++) {
			if(arr[min_index] > arr[j])
				min_index = j;
		}
		/* found minimum value than value at i so swap the value at i
		 * with minimum value.
		 */
		if(min_index != i)
			swap(arr, min_index, i);
	}
}

/**
 * print_arr(): This function prints the content of array.
 *
 * @arr: An array to be sorted.
 * @n: number of elements in array.
 *
 */
void
print_arr(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
		printf(" %d", arr[i]);
	printf("\n");
}

int
main()
{
	int arr[ARR_NELEMENTS] = {8, 44, 6, 99, 0, -11, -15, -7, 10, -3};
	print_arr(arr, ARR_NELEMENTS);
	selection_sort(arr,ARR_NELEMENTS);
	print_arr(arr, ARR_NELEMENTS);
}

