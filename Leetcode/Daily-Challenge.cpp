334. Increasing Triplet Subsequence

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        int a=INT_MAX,b=INT_MAX;
        for(auto i:nums){
            if(i>b) return true;
            if(i<=a) a=i;
            else if(i<b) b=i;
        }
        return false;
    }
};
