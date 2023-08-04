#include <iostream>
#include <vector>
#include <set>
#include <algorithm> // Include this header for std::find

class Solution {
public:
    int dp[301];
    
    int help(int i, const std::string& s, const std::vector<std::string>& wordDict) {
        if (i == s.size()) return 1;
        std::string temp;
        if (dp[i] != -1) return dp[i];
        for (int j = i; j < s.size(); j++) {
            temp += s[j];
            if (std::find(wordDict.begin(), wordDict.end(), temp) != wordDict.end()) {
                if (help(j + 1, s, wordDict)) return dp[i] = 1;
            }
        }
        return dp[i] = 0;
    }

    bool wordBreak(const std::string& s, const std::vector<std::string>& wordDict) {
        std::memset(dp, -1, sizeof dp);
        return help(0, s, wordDict);
    }
};
//link: https://www.youtube.com/watch?v=_iIK7Gu7MNo
