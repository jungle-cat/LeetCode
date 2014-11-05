/*
 * inorder.cpp
 *
 *  Given a binary tree, return the inorder traversal of its nodes' values.
 *  For example:
 *      Given binary tree {1,#,2,3},
 *         1
 *          \
 *           2
 *          /
 *         3
 *      return [1,3,2].
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

vector<int> inorderTraversal(TreeNode *root)
{
	vector<int> ret;
	if (root == nullptr)
		return ret;

	stack<TreeNode*> s;
	s.push(root);
	TreeNode* prev = nullptr;

	while (!s.empty()) {
		TreeNode* p = s.top();
		if (p->left == nullptr || prev == p->left) {
			s.pop();
			prev = p;
			ret.push_back(p->val);
			if (p->right) s.push(p->right);
		}
		else
			s.push(p->left);
	}
	return move(ret);
}

