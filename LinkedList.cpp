/*  Melroy Dsouza
	LinkedList data struc, .cpp file
*/
#include "LinkedList.h"

// Last edited: Oct 20, 2018

//default construc, sets headptr to null.
LinkedList::LinkedList()
{
	headptr = nullptr;
}

//destroys all nodes in the list, iteratively
LinkedList::~LinkedList()
{
	this->clear();
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
// Constraints: unable to use any list function except access to nodes
// data values and the next node. No going backwards.
// precond: both Lists contain at least one node, 
// the values in the nodes of the list create a reversed int
// which will be added, ex. 3->4->5 = 345. The number of nodes does not exceed memory capacity.
// postcond: returns a list with individual ints of the total sum in each node.
ListNode * LinkedList::addTwoListNums(ListNode * l1, ListNode * l2)
{
	int carryOver = 0;
	//The new list to be created.
	ListNode *root;
	//pointer that goes through new list when adding nodes.
	ListNode *n = root;
	while (l1 != nullptr || l2 != nullptr || carryOver != 0) {
		int v1, v2, val = 0;
		if (l1 != nullptr) {
			v1 = l1->data;
			l1 = l1->next;
		}
		if (l2 != nullptr) {
			v2 = l2->data;
			l2 = l2->next;
		}
		carryOver = (v1 + v2) / 10;
		val = (v1 + v2 + carryOver) % 10;
		n = new ListNode(val);
		n = n->next;
	}

	return root;
}

// adds node to the very back of the tree
// by traversing to the next nullptr
// and adding a node with the value there.
bool LinkedList::add(int value)
{
	if (headptr == nullptr) {
		headptr = new ListNode(value);
		return true;
	}
	ListNode *n = headptr;
	while (n != nullptr) {
		n = n->next;
	}
	n = new ListNode(value);
	return true;
}

// constraints: unable to use any method except
// access data value at node, and access subsequent nodes.
// precond: Valid list and non-negative int k.
// poscond: return same list which has the elements
// rotated k times.
ListNode * LinkedList::rotate(ListNode * l1, int k)
{
	if (k == 0) {
		return headptr;
	}
	ListNode * last = headptr;
	int len = 1;
	while(last->next != nullptr) {
		last = last->next;
		len += 1;
	}
	k %= len;
	if (k == 0) {
		return headptr;
	}
	//makes a circular list that has end pointing to the front.
	last->next = headptr;
	for (int i= 0; i < len - k; i++) {
		headptr = headptr->next;
	}
	ListNode * newHeadptr = headptr->next;
	//breaks list again and creates one-way list.
	headptr->next = nullptr;
	return newHeadptr;
}
// traverses the list and
// returns how many nodes there
// are based on a count var.
int LinkedList::getSize()
{
	if (headptr == nullptr) {
		return 0;
	}
	ListNode *n = headptr;
	int nodeSum = 1;
	while (n != nullptr) {
		n = n->next;
		nodeSum++;
	}
	return nodeSum;
}

bool LinkedList::remove(int value)
{
	if (headptr->data == value) {
		ListNode *temp = headptr->next;
		delete headptr;
		headptr = temp;
		return true;
	}
	ListNode * n = headptr; //traversing list temp.
	while(n->next != nullptr) { //traverse till end
		if (n->next->data == value) {  //checks if next value is what we need to find.
			ListNode * temp1 = n->next; //creates temp to hold deletion node.
			n->next = n->next->next; // sets previous node to point to the next->next node.
			delete temp1; // delete the node currently at.
			return true; // return true.
		}
	}
	return false; // if can't find node, return false.
}
// deletes all nodes in list iteratively.
void LinkedList::clear()
{
	while (headptr != nullptr) {
		ListNode* temp = headptr;
		headptr = headptr->next;
		delete temp;
	}
}
