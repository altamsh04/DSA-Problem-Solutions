class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        const int totalMinutesInDay = 24 * 60;
        if (timePoints.size() > totalMinutesInDay) {
            return 0;
        }

        vector<int> minutes;
      
        for (const auto& time : timePoints) {
            int hour = stoi(time.substr(0, 2));
            int minute = stoi(time.substr(3));
            minutes.push_back(hour * 60 + minute);
        }
      
        sort(minutes.begin(), minutes.end());
      
        minutes.push_back(minutes[0] + totalMinutesInDay);
      
        int minDifference = totalMinutesInDay;
      
        for (int i = 1; i < minutes.size(); ++i) {
            minDifference = min(minDifference, minutes[i] - minutes[i - 1]);
        }
      
        return minDifference;
    }
};
