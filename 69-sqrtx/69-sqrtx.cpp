class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = x;
        long long int ans = -1;
        while(low<=high){
            long long int mid = (low+high)/2;
            long long int sq = mid*mid;
            if(sq==x){
                return mid;
            }else if(sq>x){
                high = mid-1;
            }else{
                low = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
};