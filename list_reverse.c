/*
 * This is the file in which you'll write a function to reverse a linked list.
 * Make sure to add your name and @oregonstate.edu email address below:
 *
 * Name: Cameron Kocher
 * Email: kochecam@oregonstate.edu
 */

#include <stdio.h>

#include "list_reverse.h"

/*
 * In this function, you will be passed the head of a singly-linked list, and
 * you should reverse the linked list and return the new head.  The reversal
 * must be done in place, and you may not allocate any new memory in this
 * function.
 *
 * Params:
 *   head - the head of a singly-linked list to be reversed
 *
 * Return:
 *   Should return the new head of the reversed list.  If head is NULL, this
 *   function should return NULL.
 */
struct link* list_reverse(struct link* head) {
	if(head == NULL){
		return NULL;
	}
	
	else if(head->next == NULL){
		return head;
	}
	
	else{
		struct link *prev_link;			// Previous link
		struct link *curr_link = head;	// Current link
		struct link *next_link;			// Next link
		
		while(curr_link != NULL){
			next_link = curr_link->next;
			curr_link->next = prev_link;
			prev_link = curr_link;
			curr_link = next_link;
		}
		
		head = prev_link;
	}
	
	return head;
}
