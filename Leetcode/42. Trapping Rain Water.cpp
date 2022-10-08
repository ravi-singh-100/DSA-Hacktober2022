//Question link : https://leetcode.com/problems/trapping-rain-water/


//your code goes here

class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()==1)
            return 0;
        int c=0;
        int i=0;
        int j=i+1;
        while(i<=height.size()-1 && j<=height.size()-1) {
            if(height[j]>=height[i]) {
                c+=(height[i]-height[i+1])*(j-i-1);
                i++;
            }
            else {
                j++;
            }
            if(i==j) {
                j++;
            }
        }
        if(i!=j) {
            int pos=i;
            i=height.size()-1;
            j=i;
            i--;
            while(i>=pos && j>=pos) {
                if(height[i]>=height[j]) {
                    c+=(height[j]-height[j-1])*(j-i-1);
                    j--;
                }
                else
                    i--;
                if(i==j)
                    i--;
            }
        }
        return c;
    }
};
