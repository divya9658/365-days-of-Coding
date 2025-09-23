// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        unordered_map<char, int> mpat;
        for(int i=0;i<pat.size();i++){
            mpat[pat[i]]++;
        }
        int n = txt.size();
        int i=0, j=0;
        int count = mpat.size();
        int k = pat.length();
        int ans=0;
        while(j<n){
            if(mpat.find(txt[j])!= mpat.end()){
                mpat[txt[j]]--;
                if(mpat[txt[j]] == 0){
                    count--;
                }
            }
            if(j-i+1 < k){
                j++;
            }else if(j-i+1==k){
                if(count == 0){
                    ans++;
                }
                if(mpat.find(txt[i])!=mpat.end()){
                    mpat[txt[i]]++;
                    if(mpat[txt[i]] == 1){
                        count++;
                    }
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};