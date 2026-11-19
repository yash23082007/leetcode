class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        double a = sides[0], b = sides[1], c = sides[2];

        // Check if triangle is valid
        if (a + b <= c || b + c <= a || a + c <= b)
            return {};

        // Calculate angles using cosine rule
        double A = acos((b*b + c*c - a*a) / (2*b*c));
        double B = acos((a*a + c*c - b*b) / (2*a*c));
        double C = acos((a*a + b*b - c*c) / (2*a*b));

        // Convert radians to degrees
        vector<double> ans = {
            A * 180 / M_PI,
            B * 180 / M_PI,
            C * 180 / M_PI
        };

        sort(ans.begin(), ans.end());
        return ans;
    }
};