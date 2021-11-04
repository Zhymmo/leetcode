#include<iostream>
using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
	bool Cheak(TreeNode* p, TreeNode* q)
	{
		if (!p && !q)
			return true;
		if (!p || !q)
			return false;
		return p->val == q->val && Cheak(p->left, q->right) && Cheak(p->right, q->left);
	}
	bool isSymmetric(TreeNode* root) {
		return Cheak(root, root);
	}
};
