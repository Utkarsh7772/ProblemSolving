class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int m = *max_element(nums.begin(),nums.end());
        vector<int> pref(n+1);
        pref[0] = 0;
        for(int i=0;i<n;i++){
            pref[i+1] = pref[i] + (nums[i] == m);
        }
        long long int ans = 0;
        for(int i=1;i<=n;i++){
            int l = lower_bound(pref.begin(),pref.end(),k+pref[i]-(pref[i]!=pref[i-1]))-pref.begin();
            ans += (n-l+1);
        }
        return ans;
    }
};