class Solution {
    void dfs(TreeNode* root, vector<int>& vec){
		if(!root) return;
		dfs(root->left,vec);
		vec.push_back(root->val);
		dfs(root->right,vec);
	}
public:
    vector<int> inorderTraversal(TreeNode* root) {
        	vector<int> vec;
			dfs(root,vec);
			return vec;
    }
};
