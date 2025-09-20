class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int max_so_far=0, max_Sum=arr[0];
        for(int i=0;i<arr.size();i++){
            max_so_far += arr[i];
            max_Sum = max(max_Sum, max_so_far);
            if(max_so_far < 0){
                max_so_far = 0;
            }
        }
        return max_Sum;
    }
};