/******************************************************************************
 *
 * Geeksforgeeks-solutions
 *
 * Name: sll/common/sll.c
 * Module: sll
 * Created: Gaurav Mahajan <gauravmmh@gmail.com>
 *
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/sll.h"

/**
 * sll_add_at_head(): This will add a node at the head of the sll.
 *
 * @head:  head node of the list in which insertion is to be done.
 * @data:  data to be added into newly inserted node.
 *
 * @return: Returns the new head of the list.
 *
 */
struct sll_node* sll_add_at_head(struct sll_node *head, int data)
{
	struct sll_node *node = NULL;

	node  =  (struct sll_node *) malloc(sizeof(struct sll_node));
	assert(node != NULL);

	node->data  = data;
	if(head == NULL) {
		/* First Node */
		node->next = NULL;
	} else {
		node->next  = head;
	}
	head = node;
	return head;
}

/**
 * sll_print(): This function prints all the content of list from head to tail.
 *
 * @head: Head of the list.
 *
 */
void sll_print(struct sll_node *head)
{
	struct sll_node *node;

	node = head;
	while(node != NULL) {
		printf("%d-->", node->data);
		node = node->next;
	}
	printf("NULL\n");
}

#if 0
void
main()
{  struct sll_node *h = NULL;
         h = sll_add_at_head(h, 2);
         h = sll_add_at_head(h, 3);
         h = sll_add_at_head(h, 4);
         h = sll_add_at_head(h, 5);
         h = sll_add_at_head(h, 6);
         h = sll_add_at_head(h, 7);
         h = sll_add_at_head(h, 8);
         h = sll_add_at_head(h, 9);


         sll_print(h);

}
#endif
