class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>ans;
         int n=nums.size();
        int s=0,e=n-1;
        for(int i=0;i<n;i++){
            ans.push_back({nums[i],i});
        }
        sort(ans.begin(),ans.end());
        while(s<e){
            if(ans[s].first+ans[e].first==target){
                return {ans[s].second,ans[e].second};
            }
            else if(ans[s].first+ans[e].first<target){
                s++;
            }
            else{
                e--;
            }
        }
        return{0,0};
    }
};