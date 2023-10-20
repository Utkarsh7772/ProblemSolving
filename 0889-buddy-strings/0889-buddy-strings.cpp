class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int count= 0;
        if(s.size()!=goal.size()) return false;
        if(s == goal){
            set <char> temp(s.begin(), s.end());
            return temp.size()< goal.size();
        } 
        vector <int> v;
        for(int i =0; i<s.size(); i++){
            
            if(s[i] != goal[i]) {
                v.push_back(i);
                count++;
            }
        }
            if(count>2) return false;
            else if(count == 2){
                char temp = s[v[0]];
                s[v[0]] = s[v[1]];
                s[v[1]] = temp;
                if(s == goal) return true;
                else return false;
            }

        return false;
    }
};