class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map <int, int> m;
        int cnt = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(m.count(nums[i])){
                continue;
            }
            else{
                m[nums[i]]=cnt;
                cnt++;
            }
        }
        int i=0;
        for (auto itr = m.begin(); itr != m.end(); ++itr) {
            nums[i] = itr->first;
            i++;
        }
        
        return m.size();
    }
};