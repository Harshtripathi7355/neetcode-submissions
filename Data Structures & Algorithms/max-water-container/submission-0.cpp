class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater=0;
        int n=height.size();
        int left=0;
        int right=n-1;

        while(left<right){
            int width=right-left;
            int ht=min(height[left],height[right]);
            int area=width*ht;

            maxWater=max(maxWater,area);
            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }
            
        }
        return maxWater;
    }
};