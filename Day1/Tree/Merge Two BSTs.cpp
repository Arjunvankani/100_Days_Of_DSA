#include <bits/stdc++.h> 
/*************************************************************
    
    Following is the Binary Tree node structure:

    class TreeNode{

        public :
            int data;
            TreeNode *left;
            TreeNode *right;

            TreeNode(int data) {
                this -> data = data;
                left = NULL;
                right = NULL;
            }

            ~TreeNode() {
            if (left){
            delete left;
            }

            if (right){
            delete right;
            }
        }   
    };

*************************************************************/

void inordder(TreeNode<int> *root, vector<int> &in){    
    if(root == NULL)
        return;

    inordder(root->left,in);
    in.push_back(root->data);
    inordder(root->right,in);

}

vector<int> mergeArrays(vector<int> &a, vector<int> &b)
{
    vector<int> ans(a.size()+b.size());
    int i=0,j=0,k=0;    

    while(i< a.size() && j < b.size()){
        if(a[i]< b[j]){
            ans[k++] = a[i];
            i++;
        }
        else{
            ans[k++] = b[j];
            j++;
        }
    }
    while(i<a.size()){
        ans[k++] = a[i];
        i++;
    }
    while(j<b.size()){
        ans[k++] = b[j];
        j++;
    }
    return ans;
}

TreeNode<int>* inorderBST(int s,int e, vector<int> &in){
    if(s>e){
        return NULL;
    }
    int mid = (s+e)/2;
    TreeNode<int> *root = new TreeNode<int>(in[mid]);
    root->left = inorderBST(s, mid-1, in);
    root->right = inorderBST(mid+1, e, in);
    return root;
}

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    // Write your code here.

    //step 1 stre inorder
    vector<int> bst1, bst2;
    inordder(root1, bst1);
    inordder(root2, bst2);

    vector<int> mergeArray =    mergeArrays(bst1,bst2);
    int s = 0, e= mergeArray.size()-1;
    return inorderBST(s, e, mergeArray);
}
