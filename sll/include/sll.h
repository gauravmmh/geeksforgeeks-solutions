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
 * sll_add_at_index(): This will add a node at the given index of the sll
 *		       starting from head of sll. If the index is at beyond
 *		       tail of the sll then the insertion is made at tail.
 *
 * @head:  head node of the list in which insertion is to be done.
 * @data:  data to be added into newly inserted node.
 *
 * @return: Returns the new head of the list if changed.
 *
 */
extern
struct sll_node* sll_add_at_index(struct sll_node *head, int data, int index);

/**
 * sll_add_at_tail(): This will add a node at the tail of the sll.
 *
 * @head:  head node of the list in which insertion is to be done.
 * @data:  data to be added into newly inserted node.
 *
 * @return: Returns the new head of the list if changed.
 *
 */
struct sll_node* sll_add_at_tail(struct sll_node *head, int data);

/**
 * sll_print(): This function prints all the content of list from head to tail.
 *
 * @head: Head of the list.
 *
 */
extern void sll_print(struct sll_node *head);

/**
 * sll_destroy(): This function will free all the nodes in sll.
 *
 * @head: Head node of the sll to be destroyed.
 *
 */
extern void sll_destroy( struct sll_node *head);

/**
 * sll_delete_at_index(): This function delete a sll node at given index. If
 *			  the index is beyond tail then nothing is deleted.
 *
 * @head: Head node of the sll.
 * @index:  index at which the deletion is to be done.
 *
 * @return: Returns the head of sll if updated.
 */
struct sll_node * sll_delete_at_index(struct sll_node *head, int index);

#endif /* __SLL_H__ end */
