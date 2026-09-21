class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),1);
        int i=1;
        int mul =nums[0];
        while(i<nums.size())
        {
            ans[i] *= mul;
            mul*=nums[i];
            i++;
        }
        i = nums.size()-2;
        mul =nums[i+1];
        while(i>=0)
        {
            ans[i]*=mul;
            mul*=nums[i];
            i--;
        }
        return ans;
    }
};
