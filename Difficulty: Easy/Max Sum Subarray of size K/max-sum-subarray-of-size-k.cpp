class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int i=0,j=0;
        int max_Sum = INT_MIN;
        int sum=0;
        while(j<n){
            sum += arr[j];
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
                max_Sum = max(max_Sum, sum);
                sum -= arr[i];
                i++;
                j++;
            }
        }
        return max_Sum;
    }
};