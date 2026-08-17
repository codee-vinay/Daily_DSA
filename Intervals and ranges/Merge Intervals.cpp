//link : https://leetcode.com/problems/merge-intervals/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>res;
        res.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            vector<int>&end=res.back();
            vector<int>&start=intervals[i];
            if(start[0]<=end[1]){
                end[1]=max(start[1],end[1]);
            }
            else res.push_back(start);
        }
        return res;
    }
};