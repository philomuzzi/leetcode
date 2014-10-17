#include <cstdio>

//Definition for binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSymmetric(TreeNode *root) {
    if (root)
    {
        if (!root->left && !root->right)
            return true;

        if (root->left && root->left == root->right)
        {
            bool ret;
            ret = isSymmetric(root->left);
            ret = ret && isSymmetric(root->right);
        }

        return false;
    }

    return false;
    }
};

int main()
{
//	char[] s1 = {1,2,3,#,#,4,#,#,5};
//	char[] s2 = {1,2,2,3,4,4,3};
//	char[] s3 = {1};
	return 0;
}