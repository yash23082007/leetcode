class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for (int i = 0; i < ransomNote.size(); i++) {
            int pos = magazine.find(ransomNote[i]);

            if (pos == -1)
                return false;

            magazine.erase(pos, 1);
        }
        return true;
    }
};