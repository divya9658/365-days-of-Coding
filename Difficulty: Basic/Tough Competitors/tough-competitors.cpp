class Solution {
  public:
    int minDiff(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end(),greater<int>());
        int min_diff=INT_MAX;
        for(int i=0;i<n-1;i++){
            min_diff = min(arr[i]-arr[i+1],min_diff);
        }
        return min_diff;
    }
};
