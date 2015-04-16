/******************************************************************************
 *
 * Geeksforgeeks-solutions
 *
 * Name: sll/get_nth_node/get_nth_node.c
 * Module: sll
 * Created: Gaurav Mahajan <gauravmmh@gmail.com>
 *
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/sll.h"

/**
 * get_nth_node: This function return the nth node sll.
 *
 * @head: head of the sll.
 * @n: index at which the node is to be found.
 *
 * @return: returns the nth node in sll.
 *	    if len(sll) < n then NULL
 */
struct sll_node *
get_nth_node(struct sll_node *head, int n)
{
	struct sll_node *node= NULL;
	int len = 0;
	node = head;
	while ((node != NULL) && (n)) {
		node = node->next;
		n--;
	}
	return node;
}


void
main()
{
	struct sll_node *h = NULL;
	struct sll_node *node = NULL;
	int key;

	/* insert at head */
	h = sll_add_at_head(h, 11);
	h = sll_add_at_head(h, 22);
        h = sll_add_at_head(h, 33);
        h = sll_add_at_head(h, 44);
        h = sll_add_at_head(h, 55);

	printf("SLL : ");
	sll_print(h);

	key = 0;
	node = get_nth_node(h, key);
	printf("%dth nod in sll is : %d\n", key, node->data);

	key = 1;
	node = get_nth_node(h, key);
	printf("%dth nod in sll is : %d\n", key, node->data);

	key = 2;
	node = get_nth_node(h, key);
	printf("%dth nod in sll is : %d\n", key, node->data);

	key = 3;
	node = get_nth_node(h, key);
	printf("%dth nod in sll is : %d\n", key, node->data);

	key = 4;
	node = get_nth_node(h, key);
	printf("%dth nod in sll is : %d\n", key, node->data);

	sll_destroy(h);
}
