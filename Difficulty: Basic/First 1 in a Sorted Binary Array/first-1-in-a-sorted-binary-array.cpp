class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        int n = arr.size();
        int ans = -1;
        for(int i=0;i<n;i++){
            if(arr[i] == 1){
                ans = i;
                break;
            }
        }
        return ans;
    }
};