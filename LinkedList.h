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
	// rotates elements clock-wise k turns
	ListNode* rotate(ListNode * l1, int k);
	//returns the size of the list
	int getSize();
	//deletes node within list if exists and returns true
	// if removed, or false if the node does not exist.
	bool remove(int value);
	//deletes all nodes in list.
	void clear();
private:
	//points to the front of the list.
	ListNode *headptr;
};

