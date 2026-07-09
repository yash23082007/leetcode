class Solution {
public:
    bool rotateString(string s, string goal) {

        // Lengths must be equal
        if (s.size() != goal.size())
            return false;

        // Join string with itself
        string temp = s + s;

        // Check if goal is present
        return temp.find(goal) != string::npos;
    }
};