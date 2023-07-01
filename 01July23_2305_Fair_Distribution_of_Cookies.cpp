#include<bits/stdc++.h>
class Solution {
public:
int ans;
vector<int>count;
void backtrack(vector<int>& cookies, int k, int cookienumber)
{
    if(cookienumber==cookies.size())
    {
        int maxi=0;
        for(int i=0;i<k;i++)
        {
            maxi=max(maxi,count[i]);

        }
        ans=min(ans,maxi);
        return ;
    }
    for(int i=0;i<k;i++)
    {
        count[i]+=cookies[cookienumber];
        backtrack(cookies, k, cookienumber+1);
        count[i]-=cookies[cookienumber];
        if(count[i]==0)
        {
            break;
        }
    }

}


    int distributeCookies(vector<int>& cookies, int k) {
        ans=INT_MAX;
        count.resize(k);
        backtrack(cookies,k,0);
        return ans;
    }

};
# LINK of solution: https://www.youtube.com/watch?v=vvC6wWkaIHA
