class Solution {
public:
    int calculate(string s) {
        long ans = 0;
        long last = 0;
        long num = 0;
        char op = '+';

        for (int i = 0; i < s.size(); i++) {

            if (isdigit(s[i]))
                num = num * 10 + (s[i] - '0');

            if ((!isdigit(s[i]) && s[i] != ' ') || i == s.size() - 1) {

                if (op == '+') {
                    ans += last;
                    last = num;
                }
                else if (op == '-') {
                    ans += last;
                    last = -num;
                }
                else if (op == '*') {
                    last = last * num;
                }
                else if (op == '/') {
                    last = last / num;
                }

                op = s[i];
                num = 0;
            }
        }

        return ans + last;
    }
};