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
    bool isBalanced(TreeNode* root) {
        return dfs(root).first;
    }

private:
    pair<bool,int>dfs(TreeNode* root) {
        if(root == nullptr) {return {true,0};}

        pair<bool,int> left = dfs(root->left);
        pair<bool,int> right = dfs(root->right);

        bool balanced = (left.first && right.first) && (abs(left.second - right.second) <= 1);

        int subtree_height = max(left.second,right.second) + 1;

        return {balanced,subtree_height};
    }
};

/*
Why We Use std::pair<bool, int>When checking if a binary tree is balanced, every node needs to answer two questions about its left and right subtrees:Is the subtree balanced? (bool)What is the height of the subtree? (int)By returning a pair<bool, int>, we calculate both height and balance status in a single bottom-up pass.Without this pair (Naive Approach): You would have to call a separate height() function at every single node. This would calculate the height of the same subtrees over and over, slowing the algorithm down to $O(N^2)$ time.With this pair (Optimal Approach): Every node gets the height directly from its children's returned pairs without recalculating it, keeping the execution time to $O(N)$.Logic SummaryAt any given node:left.first / right.first: Tells us if the left/right subtrees are balanced.abs(left.second - right.second) <= 1: Checks if the height difference between the left and right subtrees is at most 1.1 + max(left.second, right.second): Calculates the height of the current node to pass up to its parent.Space ComplexityThe space complexity is $O(H)$, where $H$ is the height of the binary tree.Recursion Stack: The space used on the call stack depends entirely on the maximum depth (height) of the tree.Worst Case — $O(N)$: If the tree is completely unbalanced/skewed (like a linked list), the recursion stack will hold $N$ frame calls.Best/Average Case — $O(\log N)$: If the tree is perfectly balanced, the height of the tree is $\log_2(N)$.
*/
