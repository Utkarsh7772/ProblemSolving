#define lolo long long int
class Solution {
public:
    struct CompareEndTime {
        bool operator()(const pair<lolo, int>& a, const pair<lolo, int>& b) const {
            if (a.first == b.first) {
                return a.second > b.second;
            }
            return a.first > b.first;
        }
    };

    int mostBooked(int n, vector<vector<int>>& meetings) {
        map<int, int> booked;
        priority_queue<pair<lolo, int>, 
        vector<pair<lolo, int>>, 
        CompareEndTime> busy_rooms;

        priority_queue<int, vector<int>, greater<int>> freeRooms;
        for (int i = 0; i < n; i++) freeRooms.push(i);
        sort(meetings.begin(), meetings.end());

        for (auto& time : meetings) {
            lolo start = time[0];
            lolo end = time[1];
            while (!busy_rooms.empty() && busy_rooms.top().first <= start) {
                freeRooms.push(busy_rooms.top().second);
                busy_rooms.pop();
            }

            if (freeRooms.empty() == false)
            {
                booked[freeRooms.top()]++;
                busy_rooms.push({end, freeRooms.top()}); 
                freeRooms.pop(); 
            }
            else{
                auto done_room = busy_rooms.top(); 
                auto done_roomID = done_room.second;
                booked[done_roomID]++;
                lolo prev_endTime = done_room.first; 
                lolo curr_endTime = end-start + prev_endTime;
                busy_rooms.pop(); 
                busy_rooms.push({curr_endTime, done_roomID});
            }
        }
        int maxRooms=0, meetingRoomID = -1;
        for(auto p : booked){
            if(p.second > maxRooms){
                maxRooms =  p.second;
               meetingRoomID = p.first;
            }
        }
        return meetingRoomID;
    }
};