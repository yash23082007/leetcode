class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        //follow the approach of converting these into minutes
        vector<int>minutes(timePoints.size());

        for(int i=0;i<timePoints.size();i++){
            int h=stoi(timePoints[i].substr(0,2));
            int m=stoi(timePoints[i].substr(3));
            minutes[i]=h*60+m;

        }

        sort(minutes.begin(),minutes.end());


       
        int minDiff = INT_MAX;
        for (int i = 0; i < minutes.size() - 1; ++i) {
            minDiff = min(minDiff, minutes[i + 1] - minutes[i]);
        }

       
        //  minDiff = min(minDiff, 24 * 60 - minutes.back() + minutes.front());
          int n = minutes.size();
        minDiff = min(minDiff, 1440 - (minutes[n-1] - minutes[0]));
        return minDiff;
        
    }
};