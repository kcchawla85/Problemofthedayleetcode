class Solution {
public:
    bool condition(int s, vector<int>& dist, double hour) {
        double time = 0;
        for (int i = 0; i < dist.size() - 1; i++) {
            time += ceil((double)dist[i] / s); // Using ceil for precise time calculation
        }
        time += (double)dist[dist.size() - 1] / s;
        return time <= hour;
    }

    int minSpeedOnTime(vector<int>& dist, double hour) {
        if ((double)dist.size() - 1 >= hour) {
            return -1;
        }
        int left = 1;
        int right = (int)10e7;
        int result = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (condition(mid, dist, hour)) {
                result = mid;
                right = mid - 1; // Update right correctly
            } else {
                left = mid + 1;
            }
        }

        return result;
    }
};
// link : https://www.youtube.com/watch?v=_L4MG1G1ItE
