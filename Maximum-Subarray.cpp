class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_so_far = 0, max_Sum=nums[0];
        int i=0, j=0;
        while(j<n){
            max_so_far += nums[j];
            max_Sum = max(max_Sum, max_so_far);
            if(max_so_far < 0){
                max_so_far = 0;
            }
            j++;
            i++;
        }
        return max_Sum;
    }
};