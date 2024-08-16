class Solution {
public:
    int maxDistance(vector<vector<int>>& nums) {
        vector<pair<int,int>>a;
        vector<pair<int,int>>b;

        for(int i=0;i<nums.size();i++){
            a.push_back({nums[i][0],i});
            b.push_back({nums[i][nums[i].size()-1],i});
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        int maxi=INT_MIN;

        int n=a.size(),m=b.size();
        int i=0;
        int j=m-1;

        while(i<n && j>=0){
            if(a[i].second==b[j].second){
                if((j-1>=0 && i+1<n) && (b[j-1].first-a[i].first>b[j].first-a[i+1].first)){
                    j--;
                }
                else{
                    i++;
                }
                continue;
            }
            maxi=max(maxi,b[j].first-a[i].first);
            i++;
        }
        return maxi;
    }
};