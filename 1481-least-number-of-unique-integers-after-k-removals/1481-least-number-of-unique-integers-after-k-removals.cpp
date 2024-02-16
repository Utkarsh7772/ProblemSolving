class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        vector<int>v = {1};
        for(int i=1;i<n;i++){
            if(arr[i]== arr[i-1]){
                v.back()++;
            }
            else{
                v.push_back(1);
            }
        }
        int ans = v.size(), m = ans;
        sort(v.begin(),v.end());
        for(int i=0;i<m;i++ ){
            if(v[i]<=k){
                k-= v[i];
                ans--;
            }
        }
        return ans;
    }
};