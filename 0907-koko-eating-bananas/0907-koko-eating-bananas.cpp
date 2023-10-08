class Solution {
public:
     int maxValue(vector<int>& piles){
        int mx = piles[0] ; 
        for(auto &val : piles) mx=max(mx,val);
        return mx;
    }
    int eatTime(vector<int>& piles , int mid){
        int time = 0 ; 
        for(auto &val:piles){
              time+=(val+mid-1)/mid ;
        }
        return time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1 , end=maxValue(piles); 
        int k = 0 ; 
          while(start<end){
            int mid = start + (end-start)/2; 
            k = eatTime(piles,mid) ;
            if(k<=h){
            end=mid;
            }
            else if(k>h){
            start=mid+1;
            }
        } 
        return start;
}
};