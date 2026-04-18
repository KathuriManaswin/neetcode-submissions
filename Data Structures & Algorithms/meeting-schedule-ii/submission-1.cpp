/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        if(intervals.size() == 0) return 0;
        priority_queue<int, vector<int>, greater<int>> pq;

        sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b){
            return a.start < b.start;
        });

        for(auto it : intervals){
            if(!pq.empty() && it.start >= pq.top()){
                pq.pop();
            }

            pq.push(it.end);
        }

        return pq.size();
    }
};
