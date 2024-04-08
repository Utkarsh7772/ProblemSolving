class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
         int ones = 0;
        int zeros = 0;
        for(int i : students){
            if(i == 1) ones++;
            if(i == 0) zeros++;
        }

        for(int i : sandwiches){
            if(i == 0) zeros--;
            if(i == 1) ones--;
            if(ones < 0) return zeros;
            if(zeros < 0) return ones;
        }

        return 0;
    }
};