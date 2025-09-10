class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        int l=0,r=0;
        int ans=INT_MAX, sum=0;
        while(r<arr.size()){
            while(r<arr.size() && sum <= x){
                sum += arr[r++];
            }
            if(r==arr.size() && sum <= x) break;
            while(l<r && sum - arr[l] >x){
                sum -= arr[l++];
            }
            ans = min(ans, r-l);
            sum -= arr[l];
            l++;
        }
        if(ans == INT_MAX) return 0;
        else return ans;
    }
};