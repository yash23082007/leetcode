class Solution {
public:
    bool isPalindromic(string s) {
        string binaryStr="";
        for(int i=0;i<s.size();i++){
            binaryStr+=bitset<8>(s[i]).to_string();
        }
        int left = 0;
        int right = binaryStr.length() - 1;
        
        while (left < right) {
            if (binaryStr[left] != binaryStr[right]) {
                return false;
            }
            left++;
            right--;
        }
        
        return true;

        
    }
};