/******************************************************************************
 *
 * Geeksforgeeks-solutions
 *
 * Name: sll/delete_node_using_pointer/delete_node_using_pointer.c
 * Module: sll
 * Created: Gaurav Mahajan <gauravmmh@gmail.com>
 *
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/sll.h"

/**
 * delete_node_using_pointer(): This function will delete the node at give
 *				pointer.
 *
 * @head: head of the sll.
 * @node: pointer to the node which needs to be freed.
 *
 * @return: Returns the head of the sll. The node to be deleted can be the
 *	    head node of the list. So deleting head will change create a new
 *	    head.
 */
struct sll_node *
delete_node_using_pointer(struct sll_node *head, struct sll_node *node)
{
	struct sll_node *temp = NULL;

	if(!node)
		return;

	if (node->next == NULL) {
		/* Tail of the list */
		if (head == node) {
			/*single element */
			free(head);
			return NULL;
		}
		/* Traverse till tail */
		temp = head;
		while((temp->next) && (temp->next != node))
			temp = temp->next;
		free(node);
		temp->next = NULL;
	} else {
		node->data = node->next->data;
		temp = node->next;
		node->next = temp->next;
		free(temp);
	}
	return head;
}

void
main()
{  struct sll_node *h = NULL;

	/* insert at head */
	h = sll_add_at_head(h, 1);
	h = sll_add_at_head(h, 2);
        h = sll_add_at_head(h, 3);
        h = sll_add_at_head(h, 4);
        h = sll_add_at_head(h, 5);

	printf("SLL : ");
	sll_print(h);

	/* Delete head */
	printf("Delete Head: ");
	h = delete_node_using_pointer(h, h);
	sll_print(h);

	/* Delete tail */
	printf("Delete Tail: ");
	h = delete_node_using_pointer(h, h->next->next->next);
	sll_print(h);

	/* Delete beyond list or null */
	printf("Delete beyond list or null: ");
	h = delete_node_using_pointer(h, h->next->next->next);
	sll_print(h);

	/* Delete intermediate node */
	printf("Delete intermediate node: ");
	h = delete_node_using_pointer(h, h->next);
	sll_print(h);

	sll_destroy(h);
}
