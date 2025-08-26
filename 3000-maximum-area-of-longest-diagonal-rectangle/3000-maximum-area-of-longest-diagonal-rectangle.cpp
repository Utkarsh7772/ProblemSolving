class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxdiag=-1;
        int maxarea=-1;
        for(int i=0;i<dimensions.size();i++){
            int diag=(dimensions[i][0]*dimensions[i][0]+ dimensions[i][1]*dimensions[i][1]);
            int area=dimensions[i][0]*dimensions[i][1];
            if(diag>maxdiag || (diag==maxdiag && area>maxarea)){
            maxdiag=diag;
            maxarea=area;
            }
        }
        return maxarea;
    }
};