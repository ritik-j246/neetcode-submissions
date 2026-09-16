class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i =0;s[i]!='\0';i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);
            }
            else if (s[i]==')'||s[i]=='}'||s[i]==']')
            {
                if(st.empty()||s[i]-st.top()>2||s[i]-st.top()<1)
                return false;
                else
                st.pop();
            }
        }
        if(st.empty()) return true;
        return false;  
        
    }
};
