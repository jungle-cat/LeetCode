/*
 * maxdepth.cpp
 *
 *  Given a binary tree, find its maximum depth. The maximum depth
 *  is the number of nodes along the longest path from the root node
 *  down to the farthest leaf node.
 *
 *  Created on: 2014-10-22
 *      Author: Feng
 */

#include <algorithm>
using namespace std;


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

int maxDepth(TreeNode* root, int maxd)
{
	if (root == nullptr)
		return maxd;

	int depth = max(maxDepth(root->left, maxd), maxDepth(root->right, maxd));
	return depth+1;
}


int maxDepth(TreeNode* root)
{
	return maxDepth(root, 0);
}

