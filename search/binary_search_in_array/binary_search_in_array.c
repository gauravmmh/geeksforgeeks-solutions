/******************************************************************************
 *
 * Geeksforgeeks-solutions
 *
 * Name: search/binary_search_in_array.c
 * Created: Gaurav Mahajan <gauravmmh@gmail.com>
 *
 ******************************************************************************/

#include <stdio.h>

/* Global return types */
#define GLOBAL_FAILURE -1 /* global failure return type */
#define GLOBAL_SUCCESS  0 /* global success return type */

/* Number of array elements */
#define ARR_NELEMENTS 5

/**
 * binary_search_recursive(): This function search a given key in source
 *			      arrary of integers recursively.
 * @arr: This is the source sorted array, in which the search is to be done.
 * @l:	 This is lower bound of the search window.
 * @r:	 This is the upper bound of the search window.
 * @key: This is the key to be searched in an array.
 *
 * @return:
 *	On Success : Returns index of key.
 *	On Failure : returns GLOBAL_FAILURE
 *
 */
int
binary_search_recursive(int arr[], int l, int r, int key)
{
	int m;

	/* check for window size */
	if(l > r)
		/* search window has shrunk to 0 so key not found */
		return GLOBAL_FAILURE;

	/* calculate mid of search window. */
	m = l + (r - l) / 2;

	if(arr[m] == key)
		/* Key found */
		return m;
	if(arr[m] < key)
		/* search in right half of search window */
		return binary_search_recursive(arr, m+1, r, key);
	else
		/* search in left half of search window */
		return binary_search_recursive(arr, l, m-1, key);
}

/**
 * binary_search(): This function searches a give key in a sorted array
 *		    iteratively.
 *
 * @arr: This is the source sorted array, in which the search is to be done.
 * @l:	 This is lower bound of the search window.
 * @r:	 This is the upper bound of the search window.
 * @key: This is the key to be searched in an array.
 *
 * @return:
 *	On Success : Returns index of key.
 *	On Failure : returns GLOBAL_FAILURE
 *
 */
int
binary_search(int arr[], int l, int r, int key)
{
	int	m;

	/* while search window is valid. */
	while(l < r) {
		/* calculate mid of search window. */
		m = l + (r - l) / 2;

		if(arr[m] == key)
			/* Key found */
			return m;

		if(arr[m] < key)
			/* search in right half of search window */
			l = m + 1;
		else
			/* search in left half of search window */
			r = m - 1;
	}

	/* search window has shrunk to 0 so key not found */
	return GLOBAL_FAILURE;
}

int
main()
{
	int arr[ARR_NELEMENTS] = {11, 22, 33, 44, 55};
	int status = 0, l, r, key;
	int ret = GLOBAL_SUCCESS;

	/* initialize the parameters */
	l = 0; /* lower index */
	r = ARR_NELEMENTS - 1; /* upper index */
	key = 33; /* key to be searched */

	/* Test 1: Valid case - Iterative */
	status = binary_search(arr,0,4, key);
	if (status != GLOBAL_FAILURE)
		printf("binary_search():found %d at index %d\n", key, status);
	else {
		printf("binary_search():key %d not found\n", key);
		ret = GLOBAL_FAILURE;
	}

	/* Test 2: Invalid case - Iterative */
	key = 66; /* key to be searched */

	status = binary_search(arr,0,4, key);
	if (status != GLOBAL_FAILURE)
		printf("binary_search():found %d at index %d\n", key, status);
	else {
		printf("binary_search():key %d not found\n", key);
		ret = GLOBAL_FAILURE;
	}

	/* Test 3: Valid case - Recursive */
	key = 22; /* key to be searched */
	status = binary_search_recursive(arr,0,4, key);
	if (status != GLOBAL_FAILURE)
		printf("binary_search_recursive():found %d at index %d\n",
			key, status);
	else {
		printf("binary_search_recursive():key %d not found\n", key);
		ret = GLOBAL_FAILURE;
	}

	/* Test 4: Invalid case - Recursive */
	key = 66; /* key to be searched */

	status = binary_search_recursive(arr,0,4, key);
	if (status != GLOBAL_FAILURE)
		printf("binary_search_recursive():found %d at index %d\n", key, status);
	else {
		printf("binary_search_recursive():key %d not found\n", key);
		ret = GLOBAL_FAILURE;
	}
	return ret;
}
