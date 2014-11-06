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
	TreeNode* p = root;
	while (p || !s.empty()) {
		if (p) {
			s.push(p);
			p = p->left;
		}
		else {
			TreeNode* t = s.top();
			s.pop();
			ret.push_back(t->val);
			p = t->right;
		}
	}
	return move(ret);
}

