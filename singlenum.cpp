class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int missing=0;
        for(int i=0;i<nums.size();i++){
            missing=missing^(nums[i]);
        }
        return missing;
    }
};