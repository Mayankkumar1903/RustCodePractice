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
    vector<int> largestValues(TreeNode* root) {
        if(!root) return {};
        vector<int>maxVal;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int currMax = INT_MIN , size = q.size();
            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                currMax = max(currMax , node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            maxVal.push_back(currMax);
        }
        return maxVal;
    }
};