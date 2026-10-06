class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 0, dec = 0;
        int c_inc = 0, c_dec = 0;
        for(int i = 1 ; i < nums.size() ; i++){
            
            if(nums[i-1] < nums[i]){
                c_inc++;
                c_dec = 0;
            }
            else if(nums[i-1] > nums[i]){
                c_inc = 0;
                c_dec++;
            }
            else{
                c_dec = 0;
                c_inc = 0;
            }
            inc = max(inc, c_inc);
            dec = max(dec, c_dec);
        }
        return max(inc, dec) + 1;
    }
};