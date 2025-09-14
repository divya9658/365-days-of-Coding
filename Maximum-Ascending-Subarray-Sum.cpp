class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int max_Sum=nums[0], max_So_far=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i-1] < nums[i]){
                max_So_far += nums[i];
            }
            else{
                max_So_far = nums[i];
            }
            max_Sum = max(max_So_far, max_Sum);
        }
        return max_Sum;
    }
};