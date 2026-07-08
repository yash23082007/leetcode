class Solution {
public:
    bool isIsomorphic(string s, string t) {
        //use two unordered map
        //s->t
        //t->s
         unordered_map<char, char> mp1; // s -> t
        unordered_map<char, char> mp2; // t -> s

        for (int i = 0; i < s.size(); i++) {

            char c1 = s[i];
            char c2 = t[i];

            // If mapping already exists, it must match
            if (mp1.count(c1) && mp1[c1] != c2)
                return false;

            // Reverse mapping must also match
            if (mp2.count(c2) && mp2[c2] != c1)
                return false;

            // Store mapping
            mp1[c1] = c2;
            mp2[c2] = c1;
        }

        return true;
        
    }
};