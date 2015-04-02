/******************************************************************************
 *
 * Geeksforgeeks-solutions
 *
 * Name: search/binary_search_in_array.c
 * Created: Gaurav Mahajan <gauravmmh@gmail.com>
 *
 ******************************************************************************/

#include <stdio.h>

#define ARR_NELEMENTS 10

/**
 *		-: Insertion sort :-
 *
 * Insersion sort algorithm sorts the number of elements as we arrange cards
 * in pack of card. We keep one part of the array sorted. Then we select
 * a card from unsorted part and insert the card into sorted part at its
 * appropriate position.
 *
 * Steps are as follows:
 * 1. Select a card from unsorted part.
 * 2. travesrs the sorted part.
 * 3. if card is less than the sorted card move the sorted card.
 * 4. Insert the card in sorted part to its appropriate position.
 *
 * The worst case comeplexity for insertion sort is  O(n^2)
 *
 */

/**
 * insertion_sort(): This function sorts an array of integers using insertion
 *		     sorting technique.
 *
 * @arr: An array to be sorted.
 * @n: number of elements in array.
 *
 */

/**
 *		8	4	6	9	0
 * card 4	j	i
 *		8	8	6	9	0
 *
 *
 */
void
insertion_sort(int arr[], int n)
{
	int i, j, card;

	for (i = 1; i < n; i++) {

		/* card to be inserted at appropriate position */
		card = arr[i];

		for(j = i - 1 ; j >= 0; j--) {

			if(card < arr[j])
				arr[j+1] = arr[j];
			else
				break;
		}
		/* copy the card to its appropriate position */
		arr[j+1] = card;
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
	insertion_sort(arr,ARR_NELEMENTS);
	print_arr(arr, ARR_NELEMENTS);
}
