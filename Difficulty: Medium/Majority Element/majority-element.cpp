class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        int size = n/2;
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            map[arr[i]]++;
        }
        int ans=-1;
        for(auto &i: map){
            if(i.second > size){
                ans = i.first;
            }
        }
        return ans;
    }
};