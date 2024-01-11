class Solution {
public:
    int maxAncestorDiff(TreeNode* root) {
        return helper(root, root->val, root->val);
    }

    int helper(TreeNode* r, int mn, int mx) {
        if (r == nullptr) {
            return mx - mn;
        }
		  // Update min and max based on the current node's value
        mn = min(mn, r->val);
        mx = max(mx, r->val);
		// Recursively calculate the max difference for left and right subtrees
        int leftDiff = helper(r->left, mn, mx);
        int rightDiff = helper(r->right, mn, mx);
		 // Return the maximum difference between left and right subtrees
        return max(leftDiff, rightDiff);
    }
};