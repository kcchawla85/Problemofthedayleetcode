class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int left=minDepth(root->left);
        int right=minDepth(root->right);
        if(root->left && root->right)
        {
            return min(left+1,right+1);
        }
        return max(left+1,right+1);
    }
};
// link : https://www.youtube.com/watch?v=nHMQ33LZ6oA
// resource link: https://leetcode.com/problems/minimum-depth-of-binary-tree/solutions/3743310/beat-s-100-dfs-bfs-c-java-python-beginner-friendly/
