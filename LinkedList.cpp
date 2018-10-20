/*  Melroy Dsouza
	LinkedList data struc, .cpp file
*/
#include "LinkedList.h"

// Last edited: Oct 20, 2018

//default construc, does nothing.
LinkedList::LinkedList()
{
}

//destroys all nodes in the list, iteratively
LinkedList::~LinkedList()
{
	while (headptr != nullptr) {
		ListNode* temp = headptr;
		headptr = headptr->next;
		delete temp;
	}
}
// one param construc, creates newNode 
// at the headptr and assigns the parameters
// value to the nodes data variable.
LinkedList::LinkedList(int value)
{
	headptr = new ListNode(value);
}

// Takes two Lists are param and creates two ints by
// stringing the values of the nodes next to each other.
// adds the two ints, and creates a new list which
// carries one integer of the sum in everyone of its
// nodes.
// precond: both Lists contain at least one node, 
// the values in the nodes of the list create a reversed int
// which will be added, ex. 3->4->5 = 345. The number of nodes does not exceed memory capacity.
// postcond: returns a list with individual ints of the total sum in each node.
ListNode * LinkedList::addTwoListNums(ListNode * l1, ListNode * l2)
{


	return nullptr;
}
