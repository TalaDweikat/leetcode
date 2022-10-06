class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int, int> m;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(m.count(nums[i])){
                cnt++;
                m[nums[i]] = cnt;
                cnt=0;
            }
            else{
                m.insert({nums[i],cnt});
            }
        }
        int answer;
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second==0){
                answer =  i->first;
            }
        }
        return answer;
    }
};