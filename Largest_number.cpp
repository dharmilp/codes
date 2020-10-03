class Solution {
public:
    static bool myCompare(string &a, string &b){
        string AB=a+b;
        string BA=b+a;
        
        return (AB>BA)?1:0;
    }
    
    string largestNumber(vector<int>& nums) {
        int x=0;
    
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==0)
        {
            x++;
        }
    }
    
    // if all the values are 0 we will return "0"
    if(x==nums.size()) return "0";
        
        vector<string> s(nums.size(),"");
    
        for(int i=0;i<nums.size();i++){
            s[i]=to_string(nums[i]);
        }
        
        sort(s.begin(),s.end(),myCompare);
        
        string ans="";
    
        for(int i=0;i<s.size();i++){
            ans+=(s[i]);
        }
        
        return ans;
    }
};
