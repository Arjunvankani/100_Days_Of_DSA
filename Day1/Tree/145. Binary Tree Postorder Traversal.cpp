class Solution {
    void dfs(TreeNode* root, vector<int>& vec){
		if(!root) return;	
		
		dfs(root->left,vec);
		dfs(root->right,vec);
		vec.push_back(root->val);
	}
public:
    vector<int> inorderTraversal(TreeNode* root) {
        	vector<int> vec;
			dfs(root,vec);
			return vec;
    }
};
