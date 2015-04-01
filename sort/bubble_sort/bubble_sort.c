/******************************************************************************
 *
 * Geeksforgeeks-solutions
 *
 * Name: sort/bubble_sort/bubble_sort.c
 * Created: Gaurav Mahajan <gauravmmh@gmail.com>
 *
 ******************************************************************************/

#include <stdio.h>

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
 * bubble_sort(): This function sorts an array of integers using bubble
 *		  sorting technique.
 *
 * @arr: An array to be sorted.
 * @n: number of elements in array.
 *
 */
void
bubble_sort(int arr[], int n)
{
	int i, j;
	int swapped = 0;
	for (i=0; i<n; i++) {
		swapped = 0;
		for(j = 0; j < n-i-1; j++) {
			if(arr[j] > arr[j+1]) {
				swap(arr, j, j+1);
				swapped = 1;
			}
		}
		/* No swap done in this pass. So array is sorted now. */
		if(swapped == 0)
			break;
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
	int arr[ARR_NELEMENTS] = {8,4, 6, 9, 0, -1, 5, -7, 10, -3};
	print_arr(arr, ARR_NELEMENTS);
	bubble_sort(arr,ARR_NELEMENTS);
	print_arr(arr, ARR_NELEMENTS);
}
