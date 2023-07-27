class Solution {
public:
bool isPossible(vector<int>& batteries, long long time, int computers){
long long totTime = 0;
for(long long bTime : batteries){
if(bTime < time) totTime += bTime;
else totTime += time;
}
return (totTime >= time * computers);
}
long long maxRunTime(int n, vector<int>& batteries) {
long long low = 0, high = 0;
int sz = batteries.size();
for(int i = 0; i < sz; i++){
high += batteries[i];
}
high = 1e14;
long long ans = 0;
while(low <= high){
long long mid = low + (high-low)/2;
if(isPossible(batteries, mid, n)){
ans = mid;
low = mid+1;
}
else{
high = mid-1;
}
}
return ans;
}
};
// link : https://www.youtube.com/watch?v=Yej4Zs3HD4k
// https://drive.google.com/file/d/1eMEuLbCyNcD3wKYg1LqjNhuYN0EbCJGK/view
