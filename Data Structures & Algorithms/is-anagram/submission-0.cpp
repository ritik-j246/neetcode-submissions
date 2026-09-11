class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> vec(26,0);
        vector<int> vec2(26,0);
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++)
        {
            vec[s[i]-97]++;
            vec2[t[i]-97]++;
        }
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i]!=vec2[i]) return false;
        }
        return true;
        
    }
};
