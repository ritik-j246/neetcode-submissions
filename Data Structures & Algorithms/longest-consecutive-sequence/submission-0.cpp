class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    map<int,vector<int>> m;
    vector<int> temp;
    int i=0,j=0;
    int target = nums[0];
    while(j<nums.size())
    {
        if(target!=nums[j])
        {
            if(nums[j]==target-1)
            {
                j++;
                continue;
            }else
            {

                
                target = nums[j];
                m[temp.size()] = temp;
                temp.clear();
                
            }
            
        }
        else
        {
            temp.push_back(nums[j]);
            target++;
            j++;
        }
    }
    m[temp.size()] = temp;
    temp.clear();
    auto last_element = m.rbegin();
    return last_element->first;
        
    }
};
