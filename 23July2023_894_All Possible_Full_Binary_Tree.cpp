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
    vector<TreeNode*> allPossibleFBT(int n) {
        if(n%2==0){
            return {};
        }
        vector<TreeNode*>List;
        if(n==1){
            List.push_back(new TreeNode(0));
        }
        else
        {
            for(int i=1;i<=n-1;i +=2){
                 vector<TreeNode*> llist=allPossibleFBT(i);
                  vector<TreeNode*> rlist=allPossibleFBT(n-i-1);
                for( TreeNode* lt: llist){
                    for(TreeNode* rt: rlist){
                        List.push_back(new TreeNode(0,lt,rt));
                    }
                }
            }
        }
        return List;
    }
};
// link : https://www.youtube.com/watch?v=VYczyMiMTqA
// https://leetcode.com/problems/all-possible-full-binary-trees/solutions/3804265/runtime-1ms-beats-98-7-recursion-memoization/
