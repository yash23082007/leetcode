class Solution {
public:
    static bool cmp(string a, string b) {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {

        vector<string> arr;

        // Convert numbers to strings
        for (int x : nums)
            arr.push_back(to_string(x));

        // Custom sort
        sort(arr.begin(), arr.end(), cmp);

        // If largest element is 0, answer is "0"
        if (arr[0] == "0")
            return "0";

        string ans = "";

        for (string s : arr)
            ans += s;

        return ans;
    }
};