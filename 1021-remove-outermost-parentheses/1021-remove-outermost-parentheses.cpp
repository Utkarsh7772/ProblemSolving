class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        string result="";
        int open=0;
        int closed=0;
        int start=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(')
                open++;
            else if(s[i]==')')
                closed++;
            if(open==closed){
                result=result+(s.substr(start+1,i-start-1));
                start=i+1;
            }
        }
        return result;
    }
};