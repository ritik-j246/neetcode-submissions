class Solution {
public:
    int maxArea(vector<int>& heights) {
        int st =0,end=heights.size()-1;
        int max_water = INT_MIN;
        while(st<end)
        {
            int water = min(heights[st],heights[end])*(end-st);
            max_water = max(max_water,water);
            heights[st]<heights[end]?st++:end--;
        }
        return max_water;
    }
};
