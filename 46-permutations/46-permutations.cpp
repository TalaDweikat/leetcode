class Solution {
public:
    int fac(int n){
        int result;
        if(n==0){
            return 1;
        }
        if(n==1){
            return 1;
        }
        result=n*fac(n-1);
        return result;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector <vector<int>> result;
        for(int i=0;i<fac(nums.size());i++){
            next_permutation(nums.begin(),nums.end());
            result.push_back(nums);
        }
        return result;
    }
};