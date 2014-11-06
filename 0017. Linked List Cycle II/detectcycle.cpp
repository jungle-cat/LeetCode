/*
 * detectcycle.cpp
 *
 * Given a linked list, return the node where the cycle begins.
 * If there is no cycle, return null.
 *
 * Follow up:
 *     Can you solve it without using extra space?
 *
 *  Created on: 2014-10-6
 *      Author: Feng
 */


struct ListNode {
	int val;
	ListNode *next;

	ListNode(int x)
		: val(x), next(nullptr)
	{}
};

ListNode* detectCycle(ListNode *head)
{
	if (head == nullptr)
		return nullptr;

	ListNode* p1 = head;
	ListNode* p2 = head;
	while (p1 && p2) {
		p1 = p1->next;
		p2 = p2->next ? p2->next->next : nullptr;
		if (p1 == p2) break;
	}
	if (p1 != p2 || p1 == nullptr || p2 == nullptr)
		return nullptr;

	p2 = head;
	while (p1 != p2) {
		p1 = p1->next;
		p2 = p2->next;
	}
	return p1;
}
