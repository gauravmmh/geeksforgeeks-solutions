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
 * sll_add_at_tail(): This will add a node at the tail of the sll.
 *
 * @head:  head node of the list in which insertion is to be done.
 * @data:  data to be added into newly inserted node.
 *
 * @return: Returns the new head of the list if changed.
 *
 */
struct sll_node* sll_add_at_tail(struct sll_node *head, int data)
{
	struct sll_node *node = NULL, *tail = NULL;

	node  =  (struct sll_node *) malloc(sizeof(struct sll_node));
	assert(node != NULL);

	node->data  = data;

	if(head == NULL) {
		/* First Node */
		head = node;
		node->next = NULL;
	} else {
		tail = head;
		while (tail->next != NULL)
			tail = tail->next;
		node->next = NULL;
		tail->next = node;
	}
	return head;
}

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
struct sll_node* sll_add_at_index(struct sll_node *head, int data, int index)
{
	struct sll_node *node = NULL, *tail = NULL;
	assert(index >= 0);

	node  =  (struct sll_node *) malloc(sizeof(struct sll_node));
	assert(node != NULL);

	node->data  = data;

	if(head == NULL || index == 0) {
		/* First Node or insertion at index 0*/
		node->next = head;
		head = node;
	} else {
		tail = head;
		while (tail->next != NULL && index > 1) {
			tail = tail->next;
			index--;
		}
		node->next = tail->next;
		tail->next = node;
	}
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

/**
 * sll_destroy(): This function will free all the nodes in sll.
 *
 * @head: Head node of the sll to be destroyed.
 *
 */
void sll_destroy( struct sll_node *head)
{
	struct sll_node *temp = NULL;
	while(head != NULL) {
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
 * sll_delete_at_index(): This function delete a sll node at given index. If
 *			  the index is beyond tail then nothing is deleted.
 *
 * @head: Head node of the sll.
 * @index:  index at which the deletion is to be done.
 *
 * @return: Returns the head of sll if updated.
 */
struct sll_node * sll_delete_at_index(struct sll_node *head, int index)
{
	struct sll_node *temp = NULL, *temp1;

	if(index == 0) {
		temp = head->next;
		free(head);
		head = temp;
	} else {
		temp = head;
		while(temp->next != NULL && index > 1) {
			temp = temp->next;
			index--;
		}
		if(index == 1 && temp->next != NULL) {
			temp1 = temp->next;
			temp->next = temp->next->next;
			free(temp1);
		}
	}
	return head;
}
