/*
 * same.cpp
 *
 *  Given two binary trees, write a function to check if they are equal or not.
 *  Two binary trees are considered equal if they are structurally identical
 *  and the nodes have the same value.
 *
 *  Created on: 2014-10-22
 *      Author: Feng
 */



/*!
 * @brief Definition for binary tree
 */
struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :
			val(x), left(nullptr), right(nullptr)
	{
	}
};

bool isSameTree(TreeNode *p, TreeNode *q)
{
	if (p == nullptr && q == nullptr)
		return true;
	if (!(p && q) || p->val != q->val)
		return false;

	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
