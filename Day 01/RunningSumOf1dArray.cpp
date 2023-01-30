


                                                                // Running Sum of 1d Array  //
                                                                
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        for(int i=1; i<nums.size(); i++)
            
        {
            nums[i]+=nums[i-1];
            
        }
        return nums;
    }
};
