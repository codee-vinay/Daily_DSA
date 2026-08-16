//link : https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int dumbo=0;
        bool hasnonzero=false;
        for(int i=0;i<nums.size();i++){
           dumbo^=nums[i];
           if(nums[i]!=0)hasnonzero=true;
        }
        if(!hasnonzero)return 0;
        else if(dumbo>0)return nums.size();
        return nums.size()-1;
    }
};