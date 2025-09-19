// User function template for C++

class Solution {
  public:
    int isGoodorBad(string S) {
        int vow_count = 0, con_count=0;
        for(int i=0;i<S.size();i++){
            if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u'){
                vow_count++;
                con_count = 0;
                if(vow_count > 5){
                    return 0;
                }
            }
            else if(S[i]=='?'){
                vow_count++;
                con_count++;
                if(vow_count>5 || con_count>3){
                    return 0;
                }
            }else{
                con_count++;
                vow_count=0;
                if(con_count>3){
                    return 0;
                }
            }
        }
        if(vow_count > 5 || con_count > 3){
            return 0;
        }else return 1;
    }
};