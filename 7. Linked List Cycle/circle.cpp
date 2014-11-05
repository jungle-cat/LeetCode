/*
 * circle.cpp
 *
 *  Given a linked list, determine if it has a cycle in it.
 *
 *  Follow up:
 *    Can you solve it without using extra space?
 *
 *  Created on: 2014-11-5
 *      Author: Feng
 */


/// @brief Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;

	ListNode(int x)
		: val(x), next(nullptr) {}
};

bool hasCycle(ListNode *head) {
	if (!head)
		return false;

	ListNode* p1 = head->next;
	ListNode* p2 = head->next ? head->next->next : nullptr;

	while(p1 != p2 && p1 && p2) {
		p1 = p1->next;
		p2 = p2->next ? p2->next->next : nullptr;
	}

	return p1 && p1 == p2;
}
