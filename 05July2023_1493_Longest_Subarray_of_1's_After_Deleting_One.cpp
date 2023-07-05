class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int  prev=0;
        int curr=0;
        int ans=0;
        for(auto i : nums)
        {
            if(i==1)
            {
                curr++;

            }
            else
            {
                ans=max(ans,prev+curr);
                prev=curr;
                curr=0;
            }

            
        }
        ans=max(ans,prev+curr);
        if(ans==nums.size())
        {
            return ans-1;

        }
        else
        {
            return ans;
        }
    }
};
//resource link : https://www.youtube.com/watch?v=jhBrybXSFTs
