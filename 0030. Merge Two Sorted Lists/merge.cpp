/*
 * merge.cpp
 *
 *  Merge two sorted linked lists and return it as a new list. The new list
 *  should be made by splicing together the nodes of the first two lists.
 *
 *  Created on: 2014-11-6
 *      Author: Feng
 */

#include <algorithm>
using namespace std;


struct ListNode {
	int val;
	ListNode *next;

	ListNode(int x)
		: val(x), next(nullptr)
	{}
};


ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
{
	if (l1 == nullptr || l2 == nullptr) {
		return l1 ? l1 : l2;
	}

	ListNode* head = nullptr;
	if (l1->val > l2->val) {
		head = l2;
		l2 = l2->next;
	}
	else {
		head = l1;
		l1 = l1->next;
	}

	ListNode* p = head;
	while (l1 && l2) {
		if (l1->val > l2->val) {
			p->next = l2;
			l2 = l2->next;
		}
		else {
			p->next = l1;
			l1 = l1->next;
		}
		p = p->next;
	}

	if (l1)
		p->next = l1;
	if (l2)
		p->next = l2;
	return head;
}
