class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string con1 = "";
        string con2 = "";

        for (int i = 0; i < word1.size(); i++) {
            con1 += word1[i];
        }

        for (int i = 0; i < word2.size(); i++) {
            con2 += word2[i];
        }

        return con1 == con2;
    }
};