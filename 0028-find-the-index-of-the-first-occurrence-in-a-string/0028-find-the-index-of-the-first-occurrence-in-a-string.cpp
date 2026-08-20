// class Solution {
// public:
//     int strStr(string haystack, string needle) {
       
//     }
// }; 
//we can use in built function 

class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = haystack.find(needle);
        return index == string::npos ? -1 : index;
    }
};