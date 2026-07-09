class Solution {
public:
    string makeFancyString(string s) {

        string ans = "";

        for(int i = 0; i < s.size(); i++) {

            // If last two characters are same as current character
            
            // Add current character
           
            if(ans.size() >= 2 &&
               ans[ans.size()-1] == s[i] &&
               ans[ans.size()-2] == s[i]) {

                continue;
            }
 ans += s[i];
        }

        return ans;
    }
};