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
    vector<int> rightSideView(TreeNode* root) {
         vector<int> res;
        if(!root) return res;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int n =q.size();
            while(n--){
                auto v1= q.front(); q.pop();
                if(n==0) res.push_back(v1->val);
                if(v1->left) q.push(v1->left);
                if(v1->right) q.push(v1->right);
                
            }
        }
        
        
        return res;
    }
};