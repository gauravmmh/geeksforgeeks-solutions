/******************************************************************************
 *
 * Geeksforgeeks-solutions
 *
 * Name: sll/include/sll.h
 * Module: sll
 * Created: Gaurav Mahajan <gauravmmh@gmail.com>
 *
 ******************************************************************************/
#ifndef __SLL_H__
#define __SLL_H__

#include <stdio.h>

struct sll_node
{
	struct sll_node * next; /* Link to next node */
	int data;		/* data in list*/
};

/**
 * sll_add_at_head(): This will add a node at the head of the sll.
 *
 * @head:  head node of the list in which insertion is to be done.
 * @data:  data to be added into newly inserted node.
 *
 * @return: Returns the new head of the list.
 *
 */
extern struct sll_node* sll_add_at_head(struct sll_node *head, int data);

/**
 * sll_print(): This function prints all the content of list from head to tail.
 *
 * @head: Head of the list.
 *
 */
extern void sll_print(struct sll_node *head);

#endif /* __SLL_H__ end */
