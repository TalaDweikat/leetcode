class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int answer=0;
        if(nums1.size()%2==0 && nums2.size()%2==0){
            answer=0;
            return answer;
        }
        else if(nums1.size()%2==0 && nums2.size()%2!=0){
            for(int i=0;i<nums1.size();i++){
                answer=answer^nums1[i];
            }
        }
        else if(nums1.size()%2!=0 && nums2.size()%2==0){
            for(int i=0;i<nums2.size();i++){
                answer=answer^nums2[i];
            }
        }
        else{
            for(int i=0;i<nums1.size();i++){
                answer=answer^nums1[i];
            }
            for(int i=0;i<nums2.size();i++){
                answer=answer^nums2[i];
            }
        }
        return answer;
    }
};