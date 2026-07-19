class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());

        salary.erase(salary.begin()); // remove minimum
        salary.pop_back();            // remove maximum

        double sum = 0;

        for (int x : salary) {
            sum += x;
        }

        return sum / salary.size();
    }
};