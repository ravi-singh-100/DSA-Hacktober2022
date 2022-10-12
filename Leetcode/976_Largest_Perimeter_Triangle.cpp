class Solution {
public:
 int largestPerimeter(vector<int>& nums) {
       
        sort(nums.begin(), nums.end(), greater<int>());
        int ans;
        
        
        for(int i = 0; i < nums.size()- 2; i++)
        {
            if(nums[i] < nums[i+1] + nums[i+2])
            {
                 ans = nums[i]+nums[i+1]+nums[i+2];
                return ans;
            }           
        }
     
        return 0;
    }
};
