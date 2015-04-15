/******************************************************************************
 *
 * Geeksforgeeks-solutions
 *
 * Name: sll/sll_reversal/sll_reversal.c
 * Module: sll
 * Created: Gaurav Mahajan <gauravmmh@gmail.com>
 *
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/sll.h"

/**
 * sll_reversal(): This function will reverse a give SLL and return athe
 *		   pointer to new sll.
 *
 * @head: Head of the sll.
 *
 * @return: Head of the reversed list.
 *
 */
struct sll_node *
sll_reversal(struct sll_node *head)
{
	struct sll_node *prev, *next, *current;

	if (head == NULL)
		return NULL;

	prev = NULL;
	current = head;
	next = head;

	while (next != NULL) {
		next = current->next;	/* keep refernce for new head for next round */
		current->next = prev;	/* Detach & add a node */
		prev = current;		/* update new head */
		current = next;		/* point to new head of original sll */
	}
	return prev;
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

	h = sll_reversal(h);

	printf("Reversed SLL : ");
	sll_print(h);

	sll_destroy(h);
}
