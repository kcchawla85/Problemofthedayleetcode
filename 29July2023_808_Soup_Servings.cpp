class Solution {
public:
vector<int>optionA={100,75,50,25};
vector<int>optionB={0,25,50,75};
double solve(int i, int j, vector<vector<double>> &dp){
    if(i==0 && j==0){
        return 0.5;
    }
    if(i==0){
        return 1;
    }
    
    if(j==0){
        return 0;
    }
    if(dp[i][j] !=-1){
        return dp[i][j];
    }
    double ans=0;
    for(int a=0;a<4;a++){
        int rema=i-optionA[a];
        int remb=j-optionB[a];
        ans =ans+ 0.25*solve(max(0,rema),max(0,remb),dp);
    }
    return dp[i][j]=ans;
}
    double soupServings(int n) {
        if(n>=4800){
            return 1;
        }
        vector<vector<double>> dp(n+1,vector<double>(n+1,-1));
        return solve(n,n,dp);
    }
};
// link : https://leetcode.com/problems/soup-servings/solutions/3831834/easy-explanation-with-comment-video-explanation-in-depth-c-java-python/
