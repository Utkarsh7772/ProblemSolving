class Solution {
public:
    int pivotInteger(int n) {
        int sum = n * (n + 1) / 2;
        int cnt=0;
        for(int i=1;i<=n;i++){
            cnt+=i;
            if(2*cnt==sum+i)
            return i;
        }
        return -1;
    }
};