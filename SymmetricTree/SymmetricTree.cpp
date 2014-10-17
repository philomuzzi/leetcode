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
        if (!root) {
            return true;
        }

        return isSymmetricHelper(root->left, root->right);
    }

    bool isSymmetricHelper(TreeNode *left, TreeNode *right)
    {
        if (!left && !right)
            return true;
        if (left && right && left->val == right->val)
        {
            if (isSymmetricHelper(left->left, right->right) && isSymmetricHelper(left->right, right->left))
                return true;
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