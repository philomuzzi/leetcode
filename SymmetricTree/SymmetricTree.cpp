#include <cstdio>

//Definition for binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// 完全错误，题目就理解错误了
class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        if (root)
        {
            if (!root->left && !root->right)
                return true;

            if (root->left && root->right && root->left->val == root->right->val)
            {
                bool ret;
                ret = isSymmetric(root->left);
                ret = ret && isSymmetric(root->right);
                return ret;
            }

            return false;
        }

        return true;
    }
};

int main()
{
//	char[] s1 = {1,2,3,#,#,4,#,#,5};
//	char[] s2 = {1,2,2,3,4,4,3};
//	char[] s3 = {1};
	return 0;
}