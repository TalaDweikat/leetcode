class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x=0;
        map<int,int> m;
        vector <int> ans;
        for(int i=0;i<nums.size();i++){
            x = target - nums[i];
            if(m.count(x)){
                ans.push_back(i);
                ans.push_back(m[x]);
            }
            m[nums[i]]=i;
        }
        
        return ans;
    }
};