class Solution {
struct{
    bool operator()(pair<int, int> a,pair<int, int> b) const
    {
        return (a.second < b.second);
    }
} customLess;
    
public:
    int findMinArrowShots(vector<pair<int, int>>& points) {
        sort(points.begin(),points.end(),customLess);
        int cnt=0;int i=0;
        int finshtime=INT_MIN;
        while(i<points.size()){
            if(points[0].first==INT_MIN) return 1;
            if(points[i].first>finshtime) {cnt++;finshtime=points[i].second;}
            i++;
        }
        return cnt;
    }
};