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


