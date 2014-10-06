/*
 * maxpathsum.cpp
 *
 *  Given a binary tree, find the maximum path sum.
 *  The path may start and end at any node in the tree.
 *
 *  For example:
 *  Given the below binary tree,
 *        1
 *       / \
 *      2   3
 *  Return 6.
 *
 *  Created on: 2014-10-6
 *      Author: Feng
 */

#include <algorithm>
#include <numeric>
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

int sumPath(TreeNode* root, int& res)
{
	if (root == nullptr)
		return numeric_limits<int>::min();

	int sum = root->val;
	int lsum = sumPath(root->left, res);
	if (lsum > 0) sum += lsum;
	int rsum = sumPath(root->right, res);
	if (rsum > 0) sum += rsum;

	int maxchildsum = max(lsum, rsum);
	res = max(res, max(sum, maxchildsum));

	if (maxchildsum > 0)
		return root->val + maxchildsum;
	else
		return root->val;
}


int maxPathSum(TreeNode* root)
{
	int ret = numeric_limits<int>::min();
	sumPath(root, ret);
	return ret;
}

