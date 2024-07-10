class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<int> st;
        for(int i=0;i<logs.size();i++)
            {
                if(logs[i]!="../" && logs[i]!="./")
                {
                    st.push(1);
                }
                else 
                {   
                    if(logs[i]!="./")
                    {
                        if(!st.empty())
                        {
                            st.pop();
                        }
                    }
                }
            }
        int res=st.size();
        return res;
    }
};