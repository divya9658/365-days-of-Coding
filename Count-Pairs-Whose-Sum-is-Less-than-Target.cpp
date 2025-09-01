class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());
        int count = 0;
        int n = nums.size();
        int i = 0, j = n-1;
        while(i<j){
            if(nums[i] + nums[j] < target){
                count += (j-i);
                i++;
            }
            else{
                j--;
            }
       }
        return count;
    }
};