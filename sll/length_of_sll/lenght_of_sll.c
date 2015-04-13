/******************************************************************************
 *
 * Geeksforgeeks-solutions
 *
 * Name: sll/middle_element_of_sll/middle_element_of_sll.c
 * Module: sll
 * Created: Gaurav Mahajan <gauravmmh@gmail.com>
 *
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/sll.h"

/**
 * sll_get_len: This function return the lenth of sll. 
 *
 * @head: head of the sll whose middle element is to be found.
 *
 * @return: returns the length of sll.
 * */
int
sll_get_len(struct sll_node *head)
{
	struct sll_node *node= NULL;
	int len = 0;
	node = head;
	while (node != NULL) {
		node = node->next;
		len++;
	}
	return len;
}

void
main()
{
	struct sll_node *h = NULL;
	struct sll_node *mid = NULL;

	/* insert at head */
	h = sll_add_at_head(h, 1);
	h = sll_add_at_head(h, 2);
        h = sll_add_at_head(h, 3);
        h = sll_add_at_head(h, 4);
        h = sll_add_at_head(h, 5);

	printf("SLL : ");
	sll_print(h);

	printf("Odd SLL: len: %d\n",
		sll_get_len(h));

	/* Delete head */
	printf("Delete Head: ");
	h = sll_delete_at_index(h, 0);
	sll_print(h);

	printf("Even SLL: sll: %d\n",
		sll_get_len(h));

	sll_destroy(h);
}
