// Melroy Dsouza
// basic List node of integer
// input type.
#pragma once

// last edited: Oct 20, 2018
class ListNode
{
public:
	ListNode();
	~ListNode();
	ListNode(int value);
private:
	int data;
	ListNode* next;
	friend class LinkedList;
};

