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
    void getpaths(TreeNode* root, int &ans, int curr){
     if(!root){
            return ;
        }
        if(!root->left && !root->right){
            curr*=10;
            curr+=root->val;
            ans+=curr;
            return ;
        }
        int m=(curr*10)+(root->val);
        getpaths(root->left,ans,m);
        getpaths(root->right,ans,m);
 }
    int sumNumbers(TreeNode* root) {
       int ans=0;
        getpaths(root,ans,0);
        return ans;
    }
};