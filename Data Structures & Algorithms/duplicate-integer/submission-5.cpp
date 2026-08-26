class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.empty()) return false;
        int size=nums.size()-1;
        sort(nums.begin(), nums.end());
        for(int i=0; i<size; i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }
        return false;
    }
};