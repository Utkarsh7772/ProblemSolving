class Solution {
private:
    int solveRec(int target,vector<int>&dp){
        if(target==0){
            return 0;
        }
        if(dp[target]!=-1){
            return dp[target];
        }

        int mini=INT_MAX;
        for(int i=1;i<=sqrt(target);i++){
            if(target-i*i>=0){
                mini=min(mini,solveRec(target-i*i,dp));    
            }
        }

        dp[target]=1+mini;
        return dp[target];
    }

public:
    int numSquares(int n) {

        int count=0;
        vector<int>dp(n+1,-1);
        int ans=solveRec(n,dp);

        if(ans==INT_MAX){
            return n;
        }
        else{
            return ans;
        }
  
    }
};