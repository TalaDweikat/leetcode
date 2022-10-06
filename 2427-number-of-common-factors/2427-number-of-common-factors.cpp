class Solution {
public:
    int commonFactors(int a, int b) {
        int minimum = min(a,b);
        int maximum = max(a,b);
        int cnt=0;
        for(int i=1;i<=minimum;i++){
            if(minimum%i==0 && maximum%i==0){
                cnt++;
            }
        }
        return cnt;
    }
};