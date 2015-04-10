/******************************************************************************
 *
 * Geeksforgeeks-solutions
 *
 * Name: sll/last_kth_element_in_sll/last_kth_element_in_sll.c
 * Module: sll
 * Created: Gaurav Mahajan <gauravmmh@gmail.com>
 *
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/sll.h"

/**
 * sll_get_kth_element_from_tail(): This function return the pointer
 *				    to kth element from tail of sll.
 *
 * @head: head of the sll whose n-kth element is to be found.
 * @k: The index of node which needs to be found from tail.
 *
 * @return: Returns the pointer for kth element from tail of sll.
 *
 */
struct sll_node *
sll_get_kth_element_from_tail(struct sll_node *head, int k)
{
	struct sll_node *front= NULL, *back = NULL;

	if((!head) || (k < 0))
		return NULL;

	for (front = head; ((k > 0) && ( front != NULL)); k--)
		front = front->next;

	/* Ivnalid length */
	if ((front == NULL) || (k > 0))
		return NULL;

	/* iterate till end  */
	back = head;
	while (front->next != NULL){
		front = front->next;
		back = back->next;
	}
	return back;
}


void
main()
{
	struct sll_node *h = NULL;
	struct sll_node *kth = NULL;
	int index;

	/* insert at head */
	h = sll_add_at_head(h, 1);
	h = sll_add_at_head(h, 2);
        h = sll_add_at_head(h, 3);
        h = sll_add_at_head(h, 4);
        h = sll_add_at_head(h, 5);

	printf("SLL : ");
	sll_print(h);

	index = 0;
	kth = sll_get_kth_element_from_tail(h, index);
	printf("%d index element from tail : %d\n", index,
		kth->data);

	index = 1;
	kth = sll_get_kth_element_from_tail(h, index);
	printf("%d index element from tail : %d\n", index,
		kth->data);

	index = 2;
	kth = sll_get_kth_element_from_tail(h, index);
	printf("%d index element from tail : %d\n", index,
		kth->data);

	index = 3;
	kth = sll_get_kth_element_from_tail(h, index);
	printf("%d index element from tail : %d\n", index,
		kth->data);

	index = 4;
	kth = sll_get_kth_element_from_tail(h, index);
	printf("%d index element from tail : %d\n", index,
		kth->data);

	sll_destroy(h);
}
