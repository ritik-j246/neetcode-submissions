class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        map<int,int,greater<int>>inverted;
        vector<int> ans;
        int n = nums.size();
        
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<int> bucket[n+1];
        for(const auto  & it:m)
        {
            int value = it.first;
            int frequency = it.second;
            bucket[frequency].push_back(value);
        }
        for(int i =n;i>=0;i--)
        {
            if(bucket[i].empty()) continue;
            for(auto it : bucket[i])
            {
                ans.push_back(it);
                if(ans.size()==k) return ans;
            }
        }

        return ans;
    }
};
