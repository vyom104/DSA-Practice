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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int> qu(size);
            for(int i=0;i<size;i++){
                auto node=q.front();
                q.pop();
                qu[i]=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ans.push_back(qu);
        }
        return ans;
    }
};