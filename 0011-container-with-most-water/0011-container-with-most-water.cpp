class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxArea = 0;

        while(left < right){
            int w = right - left;
            int ht = min(height[left], height[right]);
            int currwater = w * ht;

            maxArea = max(maxArea, currwater);

            
            if(height[left] < height[right])
                left++;
            else
                right--;
        }

        return maxArea;
    }
};