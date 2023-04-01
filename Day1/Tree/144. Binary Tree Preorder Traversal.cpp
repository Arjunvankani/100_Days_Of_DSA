class Solution {
    void dfs(TreeNode* root, vector<int>& vec){
		if(!root) return;	
		vec.push_back(root->val);
		dfs(root->left,vec);
		dfs(root->right,vec);
	}
public:
    vector<int> inorderTraversal(TreeNode* root) {
        	vector<int> vec;
			dfs(root,vec);
			return vec;
    }
};
