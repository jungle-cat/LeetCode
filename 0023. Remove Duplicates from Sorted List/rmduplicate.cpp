/*
 * rmduplicate.cpp
 *
 *  Given a sorted linked list, delete all duplicates such that each
 *  element appear only once.
 *
 *  For example,
 *    Given 1->1->2, return 1->2.
 *    Given 1->1->2->3->3, return 1->2->3.
 *
 *  Created on: 2014-11-6
 *      Author: Feng
 */



/// @brief Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;

	ListNode(int x)
		: val(x), next(nullptr) {}
};


ListNode* deleteDuplicates(ListNode* head)
{
	if (head == nullptr)
		return nullptr;

	ListNode* p = head;
	while (p->next) {
		ListNode* t = p->next;

		if (p->val == t->val) {
			p->next = t->next;
			delete t;
		}
		else p = t;
	}
	return head;
}
