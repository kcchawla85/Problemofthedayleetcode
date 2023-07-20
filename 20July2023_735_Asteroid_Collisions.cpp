#include<bits/stdc++.h>
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
       
        stack<int> s;
       
        int n = asteroids.size();
        for(int i=0;i<n;i++){
            if(s.empty() || asteroids[i]>0){
                s.push(asteroids[i]);
            }
            else{
                while(!s.empty() && s.top()>0 && s.top()<abs(asteroids[i])){
                    s.pop();
                }
                if(!s.empty() && s.top() == abs(asteroids[i])){
                    s.pop();
                }
                else
                {
                    if(s.empty() || s.top()<0){
                        s.push(asteroids[i]);
                    }
                }
            }
        }
        vector<int> ans(s.size(),0);
        while(!s.empty()){
            int size=s.size();
            ans[--size]=s.top();
            s.pop();
        }
        return ans;

    }
};
// link: https://leetcode.com/problems/asteroid-collision/solutions/3789964/easy-solution-c-java-python-beginner-friendly/
