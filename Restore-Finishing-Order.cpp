class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> res;
        int friends_size = friends.size();
        int order_size = order.size();
        for(int i=0;i<order_size;i++){
            for(int j=0;j<friends_size;j++){
                if(order[i] == friends[j]){
                res.push_back(order[i]);
            }
            }
        }
        return res;
    }
};