/*
 * postorder.cpp
 *  Given a binary tree, return the postorder traversal of its nodes' values.
 *   For example:
 *       Given binary tree {1,#,2,3},
 *          1
 *           \
 *            2
 *           /
 *          3
 *       return [3,2,1].
 *
 *  Note: Recursive solution is trivial, could you do it iteratively?
 *
 *  Created on: 2014-10-17
 *      Author: Feng
 */

#include <vector>
#include <stack>
#include <queue>
using namespace std;


struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x)
		: val(x), left(nullptr), right(nullptr)
	{
	}
};

vector<int> postorderTraversal(TreeNode* root)
{
	vector<int> ret;
	if (root == nullptr)
		return ret;

	TreeNode* pre = nullptr;
	stack<TreeNode*> s;
	s.push(root);
	while (!s.empty()) {
		TreeNode* p = s.top();
		if ( pre && (pre == p->right || pre == p->left) ){
			ret.push_back(p->val);
			pre = p;
			s.pop();
		}
		if ( pre && pre == p->left && p->right) {
		}
	} // end of while
	return move(ret);
}

