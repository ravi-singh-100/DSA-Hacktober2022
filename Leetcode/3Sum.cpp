#problem Link : https://leetcode.com/problems/3sum/description/


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        for(int itr=0; itr<n-2; itr++){
            if(itr==0 || (itr>0 && nums[itr] != nums[itr-1])){
                int low=itr+1, high=n-1;
                int target= 0 - (nums[itr]);
                while(high>low){
                    if(nums[high]+nums[low] == target){
                        vector<int> temp= {nums[high], nums[low], nums[itr]};
                        ans.push_back(temp);
                    
                        while(low<high && nums[low]==nums[low+1]){
                            low++;
                        }
                        while(low<high && nums[high]==nums[high-1]){
                            high--;
                        }
                        
                        low++; high--;
                    }
                    else if(nums[high]+nums[low] > target){
                        high--;
                    }
                    else{
                        low++;
                    }
                }
            }
        }
        return ans;
    }
};
