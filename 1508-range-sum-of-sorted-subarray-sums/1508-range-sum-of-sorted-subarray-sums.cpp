class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int M=1e9+7;
        vector<int>temp;
        int result=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                temp.push_back(sum);
            }
        }
            sort(temp.begin(),temp.end());
            for(int i=left-1;i<=right-1;i++){
                result = (result + temp[i]) % M;
            }
        return result;
    }
};