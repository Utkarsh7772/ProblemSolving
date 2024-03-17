class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>result;
        sort(intervals.begin(),intervals.end());
        int i=0;

        while(i<intervals.size() && newInterval[0]>intervals[i][1])
        {
            result.push_back({intervals[i][0],intervals[i][1]});
            i++;
        }
        
        int start=newInterval[0];
        int end=newInterval[1];
        while(i<intervals.size() && newInterval[1]>=intervals[i][0])
        {
            start=min(start,intervals[i][0]);
            end=max(end,intervals[i][1]);
            i++;
        }
            result.push_back({start,end});

        while(i<intervals.size())
        {
            result.push_back(intervals[i]);
            i++;
        }

        return result;
    }
};