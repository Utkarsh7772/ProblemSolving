class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                sum=sum+nums[i];
                maxi=max(sum,maxi);
            }
            else
                sum=0;
        }
        return maxi;
    }
};