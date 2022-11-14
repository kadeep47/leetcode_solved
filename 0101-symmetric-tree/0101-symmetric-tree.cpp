/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool el(TreeNode* left, TreeNode* right){
        
        if(left == NULL || right==NULL) return left == right ;
        
//         look at left == right  (it is itself a if condition it will check it not put fvalue of left in right i thappened because of return fxn)
        if(left->val !=  right->val)return false;
        return el(left->left ,right->right) && el(left->right ,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return el(root->left,root->right);
    }
};