// Recursion
// class Solution {
// public:
//     int helper(int ind, vector<int>& cost){
//         if(ind >= cost.size())
//             return 0;
//         return min(cost[ind] + helper(ind + 1, cost), cost[ind] + helper(ind + 2, cost));
//     }
//     int minCostClimbingStairs(vector<int>& cost) {
        
//         return min(helper(0, cost), helper(1, cost));
//     }
// };

// class Solution {
// public:
//     vector<int> dp;

//     int helper(int ind, vector<int>& cost){
//         if(ind >= cost.size())
//             return 0;
            
//         if(dp[ind] != -1)
//             return dp[ind];
        
//         dp[ind] = min(cost[ind] + helper(ind + 1, cost), cost[ind] + helper(ind + 2, cost));
//         return dp[ind];
//     }
//     int minCostClimbingStairs(vector<int>& cost) {
//         dp.assign(cost.size(), -1);
//         return min(helper(0, cost), helper(1, cost));
//     }
// };

class Solution {
public:
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n , 0);
        dp[0] = cost[0];
        dp[1] = cost[1];

        for(int i = 2 ; i < n ; ++i){
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        }
        return min(dp[n-2], dp[n-1]);
    }
};