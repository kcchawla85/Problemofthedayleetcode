class Solution {
public:
int solve(string s)
{
    int ans=0;
    for(char i='a';i<='z';i++)
    {
      for(char j='a';j<='z';j++)  
      {
          if(i!=j)
          {
              int count1=0;
              int count2=0;
              for(int k=0;k<s.size();k++)
              {
                  if(s[k]==i)
                  {
                      count1++;
                  }
                  if(s[k]==j)
                  {
                      count2++;
                  }
                  if(count2>count1)
                  {
                      count1=0;
                      count2=0;

                  }
                  if(count1>0 && count2>0)
                  {
                      ans=max(ans,count1-count2);
                  }
              }
          }
      }
    }
    return ans;
}
    int largestVariance(string s) {
        int a=solve(s);
        reverse(s.begin(),s.end());
        int b=solve(s);
        return max(a,b);
    }
};
//https://leetcode.com/problems/substring-with-largest-variance/solutions/3740725/simple-solution-explained-with-example-o-n-time-o-1-space/
