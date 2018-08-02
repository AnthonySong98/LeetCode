/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
struct{
    bool operator()(Interval a,Interval b) const
    {
        return (a.end < b.end);
    }
} customLess;
class Solution {
public:
    int eraseOverlapIntervals(vector<Interval>& intervals) {
        sort(intervals.begin(),intervals.end(),customLess);
        int cnt=0;int i=0;
        int finshtime=INT_MIN;
        while(i<intervals.size()){
            if(intervals[i].start>=finshtime) {cnt++;finshtime=intervals[i].end;}
            i++;
        }
        return intervals.size()-cnt;
    }
};