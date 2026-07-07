class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {

        queue<int> q;

        // Store indices of people
        for(int i = 0; i < tickets.size(); i++)
            q.push(i);

        int time = 0;

        while(!q.empty()) {

            int person = q.front();
            q.pop();

            // Buy one ticket
            tickets[person]--;
            time++;

            // k has finished
            if(person == k && tickets[person] == 0)
                return time;

            // Still needs tickets
            if(tickets[person] > 0)
                q.push(person);
        }

        return time;
    }
};