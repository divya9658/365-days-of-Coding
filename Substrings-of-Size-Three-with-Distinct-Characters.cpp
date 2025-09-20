class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.size();
        int left = 0, right = 2;
        int Unique_Substring=0;
        while(right < n){
            char first = s[left];
            char second = s[left+1];
            char third = s[right];
            if(first!=second && second!=third && third!=first){
                Unique_Substring++;
            }
            left++;
            right++;
        }
        return Unique_Substring;
    }
};