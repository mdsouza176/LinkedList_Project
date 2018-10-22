/* Melroy Dsouza
   LinkedList data structure .h file.
*/

// Last Edited: Oct 20, 2018

#pragma once
#include "ListNode.h"
class LinkedList
{
public:
	//default constructor, does nothing.
	LinkedList();
	//destructor, deletes all nodes in list
	~LinkedList();
	//one param construc, creates node and adds value to the nodes data variable.
	LinkedList(int value);
	//method that compares creates a number based on the digits of l1 and another
	//number based on the digits stored in l2. adds both numbers up
	//and returns a list with the digits of the number stored in individual
	//nodes of the returned list.
	ListNode* addTwoListNums(ListNode* l1, ListNode* l2);
	//adds value as a node to the back of the list.
	bool add(int value);
private:
	//points to the front of the list.
	ListNode *headptr;
};

