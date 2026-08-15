// struct TreeNode {
//       int val;
//       TreeNode *left;
//       TreeNode *right;
//      TreeNode() : val(0), left(nullptr), right(nullptr) {}
//      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//   };


class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        dfs(root, res);
        return res;
    }

private:
    int dfs(TreeNode *cur, int &res) {

        if(cur == nullptr) return 0;

        int left_half = dfs(cur->left,res);
        int right_half = dfs(cur->right,res);

        res = max(res,left_half + right_half);
        return max(left_half,right_half) + 1;
    }

};