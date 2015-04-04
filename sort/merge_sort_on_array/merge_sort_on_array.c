/******************************************************************************
 *
 * Geeksforgeeks-solutions
 *
 * Name: sort/merge_sort_on_array/merge_sort_on_array.c
 * Created: Gaurav Mahajan <gauravmmh@gmail.com>
 *
 ******************************************************************************/

#include <stdio.h>

#define ARR_NELEMENTS 10

/**
 *		-: Merge Sort :-
 *
 *	Merge Sort works on principle of Divide and Conquer
 *	1. Divide the array into two parts.
 *	2. Call the merge_sort on left part.
 *	3. Call merge_sort on right part.
 *	4. Merge(result of left, result of right part)
 */

/**
 * merge():  This function merges two sorted parts into one array.
 *
 * @arr: Array to be sorted.
 * @l: lower index of the array.
 * @m: middile index of array.
 * @r: upper index of array.
 *
 */
void
merge(int arr[], int l, int m, int r)
{
	int n1 =  m - l + 1;
	int n2 =  r - m;
	int i, j, final_arr_index;

	/* allocate temp array space */
	int L[n1], R[n2];

	/*copy data to temp array */
	for (i = 0; i< n1; i++)
		L[i] = arr[l+i];
	for (i = 0; i< n2; i++)
		R[i] = arr[m+1+i];

	/* merge the arrays*/
	i = j = 0;
        final_arr_index = l;

	while(n1 > i && n2 > j) {
		if (L[i] < R[j]) {
			arr[final_arr_index] = L[i];
			i++;
		} else {
			arr[final_arr_index] = R[j];
			j++;
		}
		final_arr_index ++;
	}

	/*copy the remaining array */
	while(n1 > i) {
		arr[final_arr_index] = L[i];
		i++;
		final_arr_index++;
	}

	while(n2 > j) {
		arr[final_arr_index] = R[j];
		j++;
		final_arr_index++;
	}
}

/**
 * merge_sort(): This function sorts an integer array using merge sorting
 *		 algorithm.
 *
 * @arr: Array to be sorted.
 * @l: lower index of the array.
 * @m: middile index of array.
 * @r: upper index of array.
 *
 */
void
merge_sort(int arr[], int l, int r)
{
	int m;
	if (l < r) {
		m = l + (r - l)/2;
		merge_sort(arr, l, m);
		merge_sort(arr, m+1, r);
		merge(arr,l ,m ,r);
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
	for(i = 0; i < n; i++)
		printf(" %d", arr[i]);
	printf("\n");
}

int
main()
{
	int arr[ARR_NELEMENTS] = {8,4, 6, 9, 0, -1, 5, -7, 10, -3};
	print_arr(arr, ARR_NELEMENTS);
	merge_sort(arr, 0, ARR_NELEMENTS - 1);
	print_arr(arr, ARR_NELEMENTS);
}


