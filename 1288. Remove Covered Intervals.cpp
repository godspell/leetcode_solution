class Solution {
public:
   static bool mycompare(vector<int> &a, vector<int> &b){
       if(a[0] == b[0])
       return a[1] > b[1];
       return a[0] < b[0];
   }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), mycompare);
        int maxval = intervals[0][1];
        int ans = 0;
        for(int i = 1; i<intervals.size(); i++){
           if(maxval >= intervals[i][1])
           ans++;
           maxval = max(maxval, intervals[i][1]);
        }
        return intervals.size() - ans;
    }
};
