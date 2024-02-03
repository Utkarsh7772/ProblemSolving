#include <bits/stdc++.h>
#include <algorithm>
#include<iostream>
#include <vector>
class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> dp(n,-1);
        return maxSum(0,arr,k,dp);
    }
    int maxSum(int ind,vector<int>& arr, int k , vector<int>&dp)
    {
        int n=arr.size();
        if(ind==n)
            return 0;
        if(dp[ind]!=-1)
            return dp[ind];
        int len=0;
        int maxim=INT_MIN;
        int max_ans=INT_MIN;
        
        for(int j=ind;j<min(ind+k,n);j++)
        {
            len++;
            maxim=std::max(maxim,arr[j]);
            int sum=static_cast<long long>(len)*maxim+maxSum(j+1,arr,k,dp);
            max_ans=std::max(max_ans,sum);
        }
        return dp[ind]=max_ans;
    }
};