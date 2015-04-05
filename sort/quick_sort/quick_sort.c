/******************************************************************************
 *
 * Geeksforgeeks-solutions
 *
 * Name: sort/quick_sort/quick_sort.c
 * Created: Gaurav Mahajan <gauravmmh@gmail.com>
 *
 ******************************************************************************/

#include <stdio.h>

/* Number of elements in an array. */
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
 * partition(): This function finds appropriate position for the pivot
 *		element. Finding position of pivot element divides the array
 *		into two partitions.
 *
 * @arr: The array to be sorted.
 * @l: lover index of the array.
 * @r: Upper index of array.
 * @return: Returns proper index of pivot element. Based on this index the
 *	    array is partitioned into 2 parts.
 *
 */
int
partition(int arr[], int l, int r)
{
	int i, j, pivot, temp;
	i = l + 1;
	pivot = arr[l];
	j = r;
	while(1) {
		while(arr[i] < pivot)
			i++;
		while(arr[j] > pivot)
			j--;
		if(i >= j)
			break;
		else {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	temp = arr[j];
	arr[j] = arr[l];
	arr[l] = temp;
	return j;
}

/**
 * quick_sort(): This function sorts an integer based on Quick sorting
 *		 algorithm.
 * @arr: The array to be sorted.
 * @l: lover index of the array.
 * @r: Upper index of array.
 *
 */
void
quick_sort(int arr[], int l, int r)
{
	int p;
	if (l < r) {
		p = partition(arr, l, r);
		quick_sort(arr, l, p-1);
		quick_sort(arr, p+1, r);
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
	int arr[ARR_NELEMENTS] = {8,4, 0, -1, 5, -7, 10, -3, 6, 9};
	print_arr(arr, ARR_NELEMENTS);
	quick_sort(arr, 0, ARR_NELEMENTS - 1);
	print_arr(arr, ARR_NELEMENTS);
}
