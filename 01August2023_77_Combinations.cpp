class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> output;
        vector<int>combinations;
        backtrack(n,k,1,combinations,output);
        return output;
    }
    private:
    void backtrack( int n, int k, int start, vector<int> &combinations, vector<vector<int>> &output){
        if(combinations.size()==k){
            output.push_back(combinations);
            return ;
        }
        for(int i=start;i<=n;i++){
            combinations.push_back(i);
            backtrack(n,k,i+1,combinations,output);
            combinations.pop_back();
        }

    }
};
//link: https://leetcode.com/problems/combinations/solutions/3845249/iterative-backtracking-video-100-efficient-combinatorial-generation/
