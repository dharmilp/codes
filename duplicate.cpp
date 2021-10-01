class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>m;
        //map<int,int>::iterator i;
        
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]>0)
                return true;
            m[nums[i]]++;
        }
        return false;
    }
};