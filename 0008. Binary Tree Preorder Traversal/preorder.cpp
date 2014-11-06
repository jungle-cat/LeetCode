/*
 * preorder.cpp
 *
 *  Given a binary tree, return the preorder traversal of its nodes' values.
 *  For example:
 *      Given binary tree {1,#,2,3},
 *         1
 *          \
 *           2
 *          /
 *         3
 *      return [1,2,3].
 *  Note: Recursive solution is trivial, could you do it iteratively?
 *
 *  Created on: 2014-11-5
 *      Author: Feng
 */

#include <vector>
#include <stack>
using namespace std;


/// @brief Definition for binary tree
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;

	TreeNode(int x)
		: val(x), left(nullptr), right(nullptr)
	{}
};

vector<int> preorderTraversal(TreeNode *root)
{
	vector<int> ret;
	if (root == nullptr)
		return ret;

	stack<TreeNode*> s;
	s.push(root);
	while(!s.empty()) {
		TreeNode* p = s.top(); s.pop();
		ret.push_back(p->val);

		if(p->right) s.push(p->right);
		if(p->left) s.push(p->left);
	}
	return move(ret);
}
