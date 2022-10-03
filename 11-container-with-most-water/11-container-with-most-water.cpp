class Solution {
public:
    int maxArea(vector<int>& height) {
        int maximum=(height.size()-1)*min(height.at(0),height.at(height.size()-1));
        int area=0, i=0, j=height.size()-1;
            while(i<=j){
                if(height.at(i)<=height.at(j)){
                    area=(j-i)*height.at(i);
                    i++;
                }
                else{
                    area=(j-i)*height.at(j);
                    j--;
                }
                maximum=max(maximum,area);
            }
            return maximum;
    }
};