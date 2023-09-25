class Solution {
public:
    bool fun(int mid,vector<int> weights, int n, int days){
        int sum=0;
        int d=1;
        for(int i=0;i<n;i++){
            if(sum+weights[i]<=mid){
                sum+=weights[i];
            }
            else{
                sum=weights[i];
                d++;
            }
        }
        if(d<=days){return true;}
        return false;
    }

    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int max=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(max<nums[i]){
                max=nums[i];
            }
        }
        int low=max;
        int high=sum;
        int ans;

        while(low<=high){
            int mid=(low+high)/2;
            if(fun(mid,nums,n,k)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    return ans;
    }
};
