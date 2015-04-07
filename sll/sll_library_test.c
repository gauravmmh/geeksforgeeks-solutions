/******************************************************************************
 *
 * Geeksforgeeks-solutions
 *
 * Name: sll/sll_library_test.c
 * Module: sll
 * Created: Gaurav Mahajan <gauravmmh@gmail.com>
 *
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "include/sll.h"

void
main()
{  struct sll_node *h = NULL;

	/* insert at head */
	h = sll_add_at_head(h, 2);
        h = sll_add_at_head(h, 3);
        h = sll_add_at_head(h, 4);
        h = sll_add_at_head(h, 5);
	sll_print(h);

	/* insert at any index */
	h = sll_add_at_index(h, 9, 0);
	h = sll_add_at_index(h, 6, 2);
	h = sll_add_at_index(h, 7, 4);
	h = sll_add_at_index(h, 8, 8);
	sll_print(h);

	/* insert at tail */
        h = sll_add_at_tail(h, 10);
        h = sll_add_at_tail(h, 11);
	h = sll_add_at_tail(h, 12);
	sll_print(h);

	/* delete at tail */
	h = sll_delete_at_index(h, 11);
	sll_print(h);
	h = sll_delete_at_index(h, 10);
	sll_print(h);

	/* delete at head */
	h = sll_delete_at_index(h, 0);
	sll_print(h);

	/* delete at middle */
	h = sll_delete_at_index(h, 2);
	sll_print(h);
	h = sll_delete_at_index(h, 4);
	sll_print(h);
	h = sll_delete_at_index(h, 6);
	sll_print(h);

	sll_destroy(h);
}
