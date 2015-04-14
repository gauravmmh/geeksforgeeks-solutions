/******************************************************************************
 *
 * Geeksforgeeks-solutions
 *
 * Name: sll/count_occurance/count_occurance.c
 * Module: sll
 * Created: Gaurav Mahajan <gauravmmh@gmail.com>
 *
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/sll.h"

/**
 * sll_get_occurance(): This function return the occurance of key in SLL.
 *
 * @head: head of the sll.
 * @key: key whose occurence is to be found.
 *
 * @return: returns the occurance of key in sll.
 * */
int
sll_get_occurance(struct sll_node *head, int key)
{
	struct sll_node *node= NULL;
	int count = 0;
	node = head;
	while (node != NULL) {
		if (node->data == key)
			count++;
		node = node->next;
	}
	return count;
}

void
main()
{
	struct sll_node *h = NULL;
	struct sll_node *mid = NULL;
	int key;

	/* insert at head */
	h = sll_add_at_head(h, 1);
	h = sll_add_at_head(h, 2);
        h = sll_add_at_head(h, 3);
        h = sll_add_at_head(h, 4);
        h = sll_add_at_head(h, 5);
        h = sll_add_at_head(h, 3);
        h = sll_add_at_head(h, 3);
        h = sll_add_at_head(h, 4);
        h = sll_add_at_head(h, 5);
        h = sll_add_at_head(h, 3);
        h = sll_add_at_head(h, 4);

	printf("SLL : ");
	sll_print(h);

	key = 1;
	printf("%d  occured %d times in sll.\n", key,
	        sll_get_occurance(h, key));
	key = 2;
	printf("%d  occured %d times in sll.\n", key,
	        sll_get_occurance(h, key));

	key = 3;
	printf("%d  occured %d times in sll.\n", key,
	        sll_get_occurance(h, key));

	key = 4;
	printf("%d  occured %d times in sll.\n", key,
	        sll_get_occurance(h, key));
	key = 5;
	printf("%d  occured %d times in sll.\n", key,
	        sll_get_occurance(h, key));

	key = 6;
	printf("%d  occured %d times in sll.\n", key,
	        sll_get_occurance(h, key));

	sll_destroy(h);
}
