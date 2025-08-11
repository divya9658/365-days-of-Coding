class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> res;
        unordered_map<int, int> map;
        for(int i=0;i<n;i++){
            int complement = target-nums[i];
            if(map.find(complement)!=map.end()){
                res.push_back(i);
                res.push_back(map[complement]);
            }
            map.insert({nums[i],i});
        }
        return res;
    }
};