/******************************************************************************
 *
 * Geeksforgeeks-solutions
 *
 * Name: sll/palindrome/sll_palindrome.c
 * Module: sll
 * Created: Gaurav Mahajan <gauravmmh@gmail.com>
 *
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/sll.h"

/**
 * sll_reversal(): This function will reverse a give SLL and return athe
 *		   pointer to new sll.
 *
 * @head: Head of the sll.
 *
 * @return: Head of the reversed list.
 *
 */
struct sll_node *
sll_reversal(struct sll_node *head)
{
	struct sll_node *prev, *next, *current;

	if (head == NULL)
		return NULL;

	prev = NULL;
	current = head;
	next = head;

	while (next != NULL) {
		next = current->next;	/* keep refernce for new head for next round */
		current->next = prev;	/* Detach & add a node */
		prev = current;		/* update new head */
		current = next;		/* point to new head of original sll */
	}
	return prev;
}


/**
 * sll_palindrome(): This function checks if the given SLL is palindrome or
 *		     not.
 *
 * @head: Head of the SLL.
 *
 * @return: 0 On if Palindrome.
 *	    1 if not palindrome.
 */
int sll_palindrome(struct sll_node *head)
{
	struct sll_node *slow, *fast, *list1, *list2, *mid = NULL, *itr1 , *itr2, *list1_end;
	int count=1, status=-1;
	/* find center of sll */
	slow = fast = head;
	while(fast!= NULL && fast->next!= NULL) {
		fast = fast->next->next;
		count+=2;
		mid = slow;
		slow = slow->next;
	}

	if(fast == NULL)
		count--;

	/* slow is at middle of list */
	if(count % 2 == 0)
	{
		/* even */
		list1_end = mid;
		list1_end->next = NULL;
		list2 = slow;
	} else {
		/* odd */
		list2 = slow->next;
		mid->next = NULL;
		list1_end = mid;
		mid  = slow;
	}
	list1 = head;

	list2 = sll_reversal(list2);

	/* check */
	itr1 = list1;
	itr2 = list2;
	printf("First Half: ");
	sll_print(list1);
	printf("Second Half: ");
	sll_print(list2);

	while((itr1 != NULL) || (itr2 != NULL))
	{
		if(itr1->data == itr2->data) {
			itr1 = itr1->next;
			itr2 = itr2->next;
			continue;
		}
		break;
	}

	/* not palindrome */
	if(itr1 != NULL && itr2 != NULL)
		status = 1;
	else
		status  = 0;

	/* arrange again */
	list2 = sll_reversal(list2);

	if(count % 2 == 0)
		/* even */
		list1_end->next = list2;
	else {
		/* odd */
		list1_end->next = mid;
		mid->next = list2;
	}
	return status;
}

void
main()
{
	struct sll_node *h = NULL;
	int status = 0;

	/* Odd Length SLL test */
	h = sll_add_at_head(h, 1);
	h = sll_add_at_head(h, 2);
        h = sll_add_at_head(h, 3);
        h = sll_add_at_head(h, 2);
        h = sll_add_at_head(h, 1);

	printf("ODD SLL : ");
	sll_print(h);

	status = sll_palindrome(h);
	if (status == 0)
		printf(" SLL is palindrome\n");
	else
		printf(" SLL is NOT palindrome\n");
	sll_destroy(h);

	/* Even Length SLL test */
	h = NULL;

	h = sll_add_at_head(h, 11);
	h = sll_add_at_head(h, 22);
        h = sll_add_at_head(h, 33);
        h = sll_add_at_head(h, 33);
        h = sll_add_at_head(h, 22);
        h = sll_add_at_head(h, 11);

	printf("EVEN SLL : ");
	sll_print(h);

	status = sll_palindrome(h);
	if (status == 0)
		printf(" SLL is palindrome\n");
	else
		printf(" SLL is NOT palindrome\n");
	sll_destroy(h);

	/* Negative test case */
	h = NULL;

	h = sll_add_at_head(h, 11);
	h = sll_add_at_head(h, 22);
        h = sll_add_at_head(h, 33);
        h = sll_add_at_head(h, 44);
        h = sll_add_at_head(h, 22);
        h = sll_add_at_head(h, 11);

	printf("Negative SLL : ");
	sll_print(h);

	status = sll_palindrome(h);
	if (status == 0)
		printf(" SLL is palindrome\n");
	else
		printf(" SLL is NOT palindrome\n");
	sll_destroy(h);

}
