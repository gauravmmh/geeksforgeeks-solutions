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
 * sll_get_middile_element: This function return the middle element of the
 *			    sll. *
 *
 * @head: head of the sll whose middle element is to be found.
 *
 * @return: Returns the pointer for middle element of sll.
 *	    1. length(sll) =  1 : head will be returned.
 *	    2. lenght(sll) = even : first element of the second part is
 *				    returned.
 *	    3. length(sll) = odd : The returned elemet is actual middle
 *				   element
 */
struct sll_node *
sll_get_middle_element(struct sll_node *head)
{
	struct sll_node *slow= NULL, *fast = NULL;

	if(!head)
		return NULL;

	if (head->next == NULL) {
		return head;
	} else {
		slow = fast = head;
		while((fast) && (fast->next)) {
			fast = fast->next->next; /* 2 steps */
			slow = slow->next; /* 1 step */
		}

	}
	return slow;
}

/*		-: Middle of SLL :-
 * Example
 *
 * odd length sll
 * 1->2->3->null
 *    s  f
 *
 * even lenght sll
 * 1->2->3->4->null
 *    s  f
 *	 s       f
 *
 */

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

	mid = sll_get_middle_element(h);

	printf("Odd SLL: middle_element: %d\n",
		mid->data);

	/* Delete head */
	printf("Delete Head: ");
	h = sll_delete_at_index(h, 0);
	sll_print(h);

	printf("Even SLL: middle_element: %d\n",
		(sll_get_middle_element(h)->data));

	sll_destroy(h);
}
