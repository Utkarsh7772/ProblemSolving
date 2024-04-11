class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>s;
        if(num.size()==1 && k==1)
            return "0";
        for(int i=0;i<num.size();i++)
        {
            while(!s.empty() && s.top()>num[i] && k>0)
            {
                k--;
                s.pop();
            }
            s.push(num[i]);
        }
        while(k>0 && !s.empty())
        {
            s.pop();
            k--;
        }
        string st;
        while(s.size()>0)
        {
            st+=s.top();
            s.pop();
        }
        reverse(st.begin(),st.end());
        int size=st.size();
        int i=0;
        if(size==0)
            return "0";
        else
        {
            while(st[i]=='0')
                i++;
        }
        if(i==size)
            return "0";
        else
            return st.substr(i);
        }
};