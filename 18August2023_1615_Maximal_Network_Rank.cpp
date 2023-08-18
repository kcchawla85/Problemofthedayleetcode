class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        int links[101][101]={0};
        int deg[101]={0};
        for(auto r : roads){
            links[r[0]][r[1]]=1;
            links[r[1]][r[0]]=1;
            deg[r[0]]++;
            deg[r[1]]++;
        }
        int res=0;
        for(int i=0;i<100;i++){
            for(int j=0;j<100;j++){
                if(i!=j){
                    int val=deg[i]+deg[j];
                    if(links[i][j]){
                        val--;
                    }
                    res=max(res,val);
                }
            }
        }
        return res;
    }
};
// link: https://www.youtube.com/watch?v=LaB-WDLaw4Q
