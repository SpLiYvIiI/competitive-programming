https://leetcode.com/problems/validate-binary-search-tree

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        vector <int> x;
        inorder(root, x);
        for(int i(1); i<=x.size()-1; ++i) if(x[i-1] >= x[i]) return false;
        return true;
    }
    
    void inorder(TreeNode * rt1, vector <int> &x){
        if(!rt1) return;
        inorder(rt1->left, x);
        x.push_back(rt1->val);
        inorder(rt1->right,x);
    }
};
