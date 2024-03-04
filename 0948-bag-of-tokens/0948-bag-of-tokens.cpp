class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
         sort(tokens.begin(),tokens.end());
        int maxpoint=0;
        int point=0;
        int i=0;
        int j=tokens.size()-1;
        while(i<=j)
        {
            if(power>=tokens[i])
            {
                point++;
                maxpoint=max(maxpoint,point);
                power-=tokens[i];
                i++;
            }
            else if(point>0)
            {
                power+=tokens[j];
                point--;
                j--;
            }
            else
            {
                return maxpoint;
            }
        }
        return maxpoint;
    }
};