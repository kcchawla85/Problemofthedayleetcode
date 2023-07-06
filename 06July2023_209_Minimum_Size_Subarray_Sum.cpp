class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int sum=0;
        int ans=1000000;
        while(j<nums.size())
        {
            sum+=nums[j];
            while(sum>=target)
            {
                ans=min(ans,j-i+1);
                sum-=nums[i];
                i++;

            }
            j++;
        }
        if(ans==1000000)
    {
        return 0;
       
    }
     else
        {
            return ans;
        }
    }
    
};
//resourse : https://www.youtube.com/watch?v=-Ksr0FX9hJI
