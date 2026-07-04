class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        // Store (position, speed) together
        vector<pair<int, int>> cars;

        for (int i = 0; i < position.size(); i++) {
            cars.push_back({position[i], speed[i]});
        }

        // Sort cars from nearest to target -> farthest
        sort(cars.rbegin(), cars.rend());

        // Stack stores arrival time of each fleet
        vector<double> stack;

        for (auto &car : cars) {

            // Time taken by current car to reach target
            double time = (double)(target - car.first) / car.second;

            // Assume current car forms a new fleet
            stack.push_back(time);

            // If current car reaches earlier (or same time)
            // than the fleet ahead, it catches that fleet.
            if (stack.size() >= 2 &&
                stack.back() <= stack[stack.size() - 2]) {

                // Merge with previous fleet
                stack.pop_back();
            }
        }

        // Remaining fleets = answer
        return stack.size();
    }
};