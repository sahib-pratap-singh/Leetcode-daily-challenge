class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        int first=intervals[0][0];
        int second=intervals[0][1];
        int cnt=1;
        for(int i=1;i<n;i++){
            if(first<intervals[i][0] and second<intervals[i][1]){
                cnt++;
            }
            if(second<intervals[i][1]){
                first=intervals[i][0];
                second=intervals[i][1];
            }
        }
        return cnt;
    }
};