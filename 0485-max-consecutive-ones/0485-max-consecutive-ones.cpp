class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0;
        int maxi=0;
        for(auto gg : nums){
            if(gg==1){
                sum=sum+gg;
                maxi=max(sum,maxi);
            }
            else
                sum=0;
        }
        return maxi;
    }
};